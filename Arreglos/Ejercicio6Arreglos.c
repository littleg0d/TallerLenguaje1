#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CANT 10
// Prototipos de funciones
void informaCantidad (int []);
int digitoEntero(int numero);
int main() {
    int n;
    int i;
    int v[10];
    for (i=0; i<CANT; i++){
        v[i]=0;
    }
    printf("Ingrese 1 numeros entre 0 y 9:\n");
    scanf("%d", &n);
    while (n>0)
    {
        int digito = digitoEntero(n);
        v[digito]++;
        n = n / 10;
    }
    informaCantidad(v);
	return 0;   
}
void informaCantidad (int v[]) {
    int i;
    for (i=0; i<CANT;i++){
        printf("El digito %d se ingreso %d veces\n", i, v[i]);
    }
}
int digitoEntero(int numero) {
    return numero % 10;
}