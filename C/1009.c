#include <stdio.h>

int main() 
{
    char nome[50];
    double salariofixo;
    double vendas;
    double total;
    scanf("%s %lf %lf",nome,&salariofixo,&vendas);
    total = (0.15*vendas)+salariofixo;
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}