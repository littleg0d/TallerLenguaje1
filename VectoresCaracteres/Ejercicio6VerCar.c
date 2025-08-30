#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <time.h>'
int palindromoIterativo(char []);
int palindromoPuntero(char *    );


int main()
{ 
    return 0;
}
int palindromoIterativo(char v[])
{
    int length=strlen(v);
    int i=0;
    for(i=0;i<length;i++)
    {
        if (v[i]!=v[length-1])
            return 0;
        length--;
    }
    return 1;
}
int palindromoPuntero(char *p)
{
    int i;
    char *inicio=p;
    char *final=p;
    int longitud=strlen(p);
    for  (i = 0; i < longitud-1; i++)
    {
        final++;
    }
    while (inicio<final)    // yo use *inicio!=*final, la ia me recomendo esta opcion pero no se como funciona
    {
        if (*inicio!=*final)         
            return 0;
        inicio++;
        final--;
    }
    return 1;
    
}