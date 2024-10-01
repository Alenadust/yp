#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int a,arg1,arg2;
    a = atoi(argv[1]);
    arg1 = atoi(argv[2]);
    arg2 = atoi(argv[3]);
    float numbers[a]; 
    srand(time(NULL));   
    for (int i = 0; i < a; i++) {
        numbers[i]= arg1 + (double)rand() / (double)RAND_MAX * (arg2-arg1); 
    
}
    for (int i = 0; i<a; i++){
        printf("%f \n", numbers[i]);

        
    }

    return 0;
}
