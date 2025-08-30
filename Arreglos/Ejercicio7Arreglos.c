#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MES 12
#define DIAS 30
#define ANOS 10
// Prototipos de funciones
int mesMenosLluvioso (float [DIAS][MES][ANOS],int anio);
int menorPrecepitacionPromedio(float [DIAS][MES][ANOS]);
int main() 
{
    float v[DIAS][MES][ANOS];
    int i, j, k;
    // Inicializo el arreglo
    srand(time(NULL));
    for (i=0; i<ANOS; i++){
        for (j=0; j<MES; j++){
            for (k=0; k<DIAS; k++){
                v[k][j][i] = rand() % 40;
            }
        }
    }
    for(i=0; i<ANOS; i++)
    {
        printf("El mes menos lluvioso del anio %d es: %d\n",i,mesMenosLluvioso(v,i));
    }
    printf("El anio con menor precipitacion promedio es: %d\n",menorPrecepitacionPromedio(v));
   
    return 0;
}
int mesMenosLluvioso (float v[DIAS][MES][ANOS],int anio)
{
    int i,j;
    float menor=9999;
    int posicion=0;
    for (i=0;i <12;i++)
    {
        float mes=0;
        for (j=0;j<30;j++)
        { 
            mes=mes+v[j][i][anio];
        }
        if (mes<menor)
        {
            menor=mes;
            posicion=i;
        }
    }
    return posicion;

}

int menorPrecepitacionPromedio(float v[DIAS][MES][ANOS])
{
    int i,j,k;
    float menor=9999;
    int posicion=0;
    for (i=0;i <10;i++)
    {
        float anio=0;
        for (j=0;j<12;j++)
        { 
            for (k=0;k<30;k++)
            {
                anio=anio+v[k][j][i];
            }
        }
        anio=anio/360;  
        if (anio<menor)
        {
            menor=anio;
            posicion=i;
        }
    }
    return posicion;

}
