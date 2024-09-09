#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 
    FILE *file;
    char ch;
    file = fopen("file1.txt", "r");

    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);
    return 0;
}
