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
    while (*final
}