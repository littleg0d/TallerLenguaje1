#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CANT 5
void tripleFunction(float[], float *, float *,int *); 
int main() {
    float v[CANT]={2,4,6,8,10};
    float promedio=0;
    float minimo=v[0];
    int posmax=0;
    tripleFunction(v, &promedio, &minimo, &posmax);
    printf("El promedio es: %.2f\n", promedio);
    printf("El minimo es: %.2f\n", minimo);
    printf("La posicion del maximo es: %d", posmax);
    return 0;
}
void tripleFunction(float v[], float *promedio, float *minimo,int *posmax)
{
    int i;
    float maximo=v[0];
    for (i=0; i<CANT; i++)
    {
        *promedio+=v[i];
        if (v[i]<*minimo)
        {
            *minimo=v[i];
        }
        if (v[i]>maximo)
        {
            maximo=v[i];
            *posmax=i;
        }
    }
    *promedio=*promedio/CANT;
}