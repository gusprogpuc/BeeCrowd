#include <stdio.h>

int main() 
{
    int cedulas;
    scanf("%d",&cedulas);
    printf("%d\n",cedulas);
    
    printf("%d nota(s) de R$ 100,00\n",cedulas/100);
    cedulas %= 100;
    
    printf("%d nota(s) de R$ 50,00\n",cedulas/50);
    cedulas %= 50;
    
    printf("%d nota(s) de R$ 20,00\n",cedulas/20);
    cedulas %= 20;
    
    printf("%d nota(s) de R$ 10,00\n",cedulas/10);
    cedulas %= 10;
    
    printf("%d nota(s) de R$ 5,00\n",cedulas/5);
    cedulas %= 5;
    
    printf("%d nota(s) de R$ 2,00\n",cedulas/2);
    cedulas %= 2;
    
    printf("%d nota(s) de R$ 1,00\n",cedulas/1);
    cedulas %= 1;

    return 0;
}