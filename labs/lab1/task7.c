#include <stdio.h>

int main() {
    FILE *file;
    char str[100];

    file = fopen("file.txt", "a"); 
    printf("Введите строку для добавления в файл: ");
    fgets(str, 100, stdin);
    fprintf(file, "%s", str); 
    
    fclose(file);

    return 0;
}
