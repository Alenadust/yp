#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Введите размер массива ");
    int a;
    scanf("%d",&a);
    a = a-1;
    float numbers[a]; 
    srand(time(NULL));   
    for (int i = 0; i <= a; i++) {
    numbers[i]=(rand()%100)/(100*1.0);
    
}
    for (int i = 0; i<=a; i++){
        printf("%lf \n", numbers[i]);

        
    }

    return 0;
}
