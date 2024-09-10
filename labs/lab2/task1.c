#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float numbers[5];
    srand(time(NULL));   
    for (int i = 0; i <= 5; i++) {
    numbers[i]=rand();
    
}
    for (int i = 0; i <= 5; i++) {
    printf("%f \n",numbers[i]);
    
}
return 0;
}
