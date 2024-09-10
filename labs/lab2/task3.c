#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float numbers[5];
    srand(time(NULL));   
    for (int i = 0; i <= 5; i++) {
    numbers[i]=(rand()%100)/(100*1.0);
    
}
    for (int i = 5; i>=0; i--){
        char s[100];
        printf("%lf \n", numbers[i]);

        
    }

    return 0;
}
