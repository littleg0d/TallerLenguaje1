#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Cambiar a matriz de caracteres 2x2
#define COL 3
void sumaMatrices(int [][COL], int [][COL], int [][COL], int);
void imprimirMatriz(int [][COL], int);
void matrizTraspuesta(char [][COL], int);
int main() {
    // Crear dos matrices de 2x3 de caracteres
    int matriz1[2][COL] = {{1,3,1},{1,0,0}};
    int matriz2[2][COL] = {{0,0,5},{7,5,0}};
    int resultado[2][COL];
    printf("Matriz 1:\n");
    imprimirMatriz(matriz1, 2);

    printf("Matriz 2:\n");
    imprimirMatriz(matriz2, 2);

    sumaMatrices(matriz1, matriz2, resultado, 2);
    printf("Suma de Matrices:\n");
    imprimirMatriz(resultado, 2);
    return 0;
}
void imprimirMatriz(int v[][COL], int elementosFila)
{
    int i, j;
    for (i = 0; i < elementosFila; i++)
    {
        for (j = 0; j < COL; j++)
            printf("%d ", v[i][j]);
        printf("\n");
    }
}
void escalarMatriz(int v[][COL],int elementosFila,int c)
{
    int i,j;
    for ( i = 0; i < elementosFila; i++)
        for ( j = 0; j < COL; j++)
            v[i][j]*=c;
}

// Solo para matrices cuadradas (2x2)
void matrizTraspuesta(char v[][COL], int n)
{
    int i, j;
    int temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < COL; j++)
        {
            temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
}
void sumaMatrices(int a[][COL], int b[][COL], int resultado[][COL], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < COL; j++)
            resultado[i][j] = a[i][j] + b[i][j];
}