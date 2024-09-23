#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
 
    FILE *file;
    char ch;
    file = fopen(argv[1], "r");

    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);
    return 0;
}
