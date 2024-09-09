#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char info[100];
    char ch;

    file = fopen("file.txt", "r+");


    printf("Введите информацию, которую необходимо добавить в начало файла: ");
    fgets(info, 100, stdin);
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);
    char *fileContent = (char *) malloc(fileSize);
    fread(fileContent, sizeof(char), fileSize, file);
    fseek(file, 0, SEEK_SET);
    fputs(info, file);
    fputs(fileContent, file);

    fclose(file);


    return 0;
}
