#include <stdio.h>
#define CANTMAX 50 
#include <string.h>
int main() {
    char vec[CANTMAX];
    printf("Ingrese una palabra (maximo %d caracteres): ", CANTMAX-1);
    scanf("%s", vec);
    int cantpalabras=0;
    while (strcmp(vec, "zzz") != 0)
    {
        if (strlen(vec) == 5)
            cantpalabras++;
        printf("%s\n", vec);
        printf("Ingrese una palabra (maximo %d caracteres): ", CANTMAX-1);
        scanf("%s", vec);
    }
    printf("Cantidad de palabras con 5 caracteres: %d\n", cantpalabras);
    
    return 0;
}