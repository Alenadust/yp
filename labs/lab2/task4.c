#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Введите размер массива ");
    int a,arg1,arg2;
    scanf("%d",&a);
    printf("Введите диапазон ");
    scanf("%d",&arg1);
    scanf("%d",&arg2);
    a = a-1;
    float numbers[a]; 
    srand(time(NULL));   
    for (int i = 0; i <= a; i++) {
    numbers[i]=(rand()%((arg1-1)-arg2)+arg1) + (rand()%((arg1-1)-arg2)+arg1)/(arg2*1.0);
    
}
    for (int i = 0; i<=a; i++){
        printf("%f \n", numbers[i]);

        
    }

    return 0;
}
