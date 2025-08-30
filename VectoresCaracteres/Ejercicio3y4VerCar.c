#include <stdio.h> 
#include <string.h>
char * reemplazoCaracter(char *p,char a, char b);
void imprimirVector(char vec[]);
int stringlength(char *p);
int main()
{ 
    char vec[50];
    char *p = vec;
    char a, b;
    printf("Ingrese una palabra (maximo 49 caracteres): ");
    scanf("%s", vec);
    printf("Ingrese el caracter a reemplazar: ");
    scanf(" %c", &a);
    printf("Ingrese el caracter de reemplazo: ");
    scanf(" %c", &b);
    imprimirVector(vec);
    reemplazoCaracter(p,a,b);
    printf("Palabra modificada: %s\n", vec);
    imprimirVector(vec);
    
    return 0;
}
int stringlength(char *p) {
    int length = 0;
    char *aux=p;
    while (*aux != '\0') {
        aux++;
        length++;
    }
    return length;
}

char * reemplazoCaracter(char *p,char a, char b) {
    char * aux=p;
    while (*aux != '\0') {
        if (*aux == a) {
            *aux = b;
        }
        aux++;
    }
    return p;
}
void imprimirVector(char vec[]) {
    int i = 0;
    while (vec[i] != '\0') {
        printf("%c", vec[i]);
        i++;
    }
    printf("\n");
}