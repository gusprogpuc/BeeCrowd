#include <stdio.h>

int main() 
{
    int codigopeca1;
    int numeropeca1;
    double valorpeca1;
    int codigopeca2;
    int numeropeca2;
    double valorpeca2;
    double total;
    scanf("%d %d %lf",&codigopeca1,&numeropeca1,&valorpeca1);
    scanf("%d %d %lf",&codigopeca2,&numeropeca2,&valorpeca2);
    total = (numeropeca1*valorpeca1)+(numeropeca2*valorpeca2);
    printf("VALOR A PAGAR: R$ %.2lf\n",total);

    return 0;
}