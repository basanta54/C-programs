#include <stdio.h>
int main()
{
    int a = 3;

    printf("the address of i = %u\n", &a);
    printf("the value of i = %d\n", *&a);

    return 0;
}