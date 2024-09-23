/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
char name[100];
float price;
} Prod;

void Sort(Prod *products, int n) {
Prod a;
for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i-1; j++) {
        if (products[j].price > products[j+1].price) {
            a = products[j];
            products[j] = products[j+1];
            products[j+1] = a;
            }
        }
    }
}


int main() {
FILE *s1, *s2;
Prod products[100];
int n = 0;

s1 = fopen("s1.txt", "r");
while (fscanf(s1, "%s %f", products[n].name, &products[n].price) == 2) {
    n++;
}
fclose(s1);
Sort(products, n);
s2 = fopen("s2.txt", "w");
for (int i = 0; i < n; i++) {
    fprintf(s2, "%s %.2f\n", products[i].name, products[i].price);
}
fclose(s2);

return 0;
}
