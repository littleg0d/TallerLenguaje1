#include <stdio.h>
#define TAM 4
void swap(int *a, int *b);
void imprimirVector(int vec[]);
void invertirVector(int vec[]);    
int main()
{ 
    
    int vector[TAM]={1,2,3,4}; 
    imprimirVector(vector);
    invertirVector(vector);
    imprimirVector(vector);
    return 0;
}
void swap(int *a, int *b) 
{ 
    int tmp; 
 
    tmp = *a; // guarda el valor de a  
    *a = *b;   // almacena b en a  
    *b = tmp; // almacena a en b  
}
void imprimirVector(int vec[]) 
{ 
    int i; 
    for(i=0;i<TAM;i++) 
        printf("%d ",vec[i]); 
    printf("\n"); 
}
void invertirVector(int vec[]) {
    int inicio = 0, fin = TAM - 1;
    while (inicio < fin) {
        swap(&vec[inicio], &vec[fin]);
        inicio++;
        fin--;
    }
}