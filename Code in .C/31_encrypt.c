#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "My name is Basanta Hazra";
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        str[i] = str[i];
    }
    printf("%d", str);
    return 0;
}
