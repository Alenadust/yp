#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file, *file1;
    char line[256];
    int k = 0;

    file = fopen("file.txt", "r");
    file1 = fopen("file1.txt", "w");

    while (fgets(line, sizeof(line), file) != NULL && k < 3) {
        fputs(line, file1);
        k++;
    }

    fclose(file);
    fclose(file1);

    return 0;
}
