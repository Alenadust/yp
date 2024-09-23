#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Количество аргументов: %d\n", argc-1);
    printf("Аргументы:\n");
    for (int i = 1; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    
    return 0;
}
