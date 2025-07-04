#include <stdio.h>

int main() 
{
    double tempo,velocidade,distancia;
    scanf("%lf %lf",&tempo,&velocidade);
    distancia = ((tempo*velocidade)/12);
    printf("%.3lf\n",distancia);

    return 0;
}