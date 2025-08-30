#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <time.h>
char * stringcopy(char *vector1, char * vector2 );
int main()
{ 
    char vec1[50];
    char vec2[50];
    printf("Ingrese una palabra (maximo 49 caracteres): ");
    scanf("%s", vec2);
    printf("Palabra original: %s\n", vec2);
    stringcopy(vec1, vec2);
    printf("Palabra copiada: %s\n", vec1);
    return 0;
}


char * stringcopy(char *vector1, char * vector2 ) 
{
    char *aux1 = vector1;
    char *aux2 = vector2;
    while (*aux2 != '\0') {
        *aux1 = *aux2;
        aux1++;
        aux2++;
    }
    *aux1 = '\0'; // Asegura que el nuevo string termine con null
    return vector1;
}