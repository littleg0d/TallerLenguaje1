#include <stdio.h> 
#include <string.h>
int main()
{ 
    char vec[50];
    printf("Ingrese una palabra (maximo 49 caracteres): ");
    scanf("%s", vec);
    int cantpalabras=0;
    while (strcmp(vec, "XXX") != 0)
    {   
        int length = strlen(vec);
        if (vec[length-1] == 'o'){
            cantpalabras++;
            printf("La palabra %s termina en 'o'\n", vec);
        }

        printf("%s\n", vec);
        printf("Ingrese una palabra (maximo 49 caracteres): ");
        scanf("%s", vec);
    }
    printf("Cantidad de palabras que terminan en 'o': %d\n", cantpalabras);
    return 0;
}