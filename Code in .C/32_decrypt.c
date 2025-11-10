#include <stdio.h>
#include <string.h>

int main()
{	char str []= "Nz!obnf!jt!Cbtboub!Ib{sb";
    int i;
    int count;

    for ( i = 0; i < strlen(str); i++)
    {
        str[i] = str [i] - 1;
    }
    printf ("%s",str);
    return 0;
}