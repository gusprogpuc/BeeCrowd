#include <stdio.h>

int main() 
{
    double salario;
    int funcionario;
    int horastrabalhadas;
    double valorporhora;
    scanf("%d %d %lf",&funcionario,&horastrabalhadas,&valorporhora);
    salario = horastrabalhadas*valorporhora;
    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2lf\n", salario);
    
    return 0;
}