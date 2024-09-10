#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file;
    file = fopen("file.txt", "w");
    float numbers[5];
    srand(time(NULL));   
    for (int i = 0; i <= 5; i++) {
    numbers[i]=rand();
    
}
    for (int i = 5; i>=0; i--){
        char s[100];
        sprintf(s, "%f \n", numbers[i]);
        fputs(s, file);
        
    }
    fclose(file);
    return 0;
}
