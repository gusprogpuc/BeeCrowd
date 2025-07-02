#include <stdio.h>

int main() 
{
    double a;
    double b;
    double c;
    double pi;
    double areatriangulo;
    double areacirculo;
    double areatrapezio;
    double areaquadrado;
    double arearetangulo;
    scanf("%lf %lf %lf",&a,&b,&c);
    pi = 3.14159;
    areatriangulo = (a*c)/2;
    areacirculo = pi*(c*c);
    areatrapezio = ((a+b)*c)/2;
    areaquadrado = b*b;
    arearetangulo = a*b;
    printf("TRIANGULO: %.3lf\n",areatriangulo);
    printf("CIRCULO: %.3lf\n",areacirculo);
    printf("TRAPEZIO: %.3lf\n",areatrapezio);
    printf("QUADRADO: %.3lf\n",areaquadrado);
    printf("RETANGULO: %.3lf\n",arearetangulo);

    return 0;
}