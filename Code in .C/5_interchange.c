#include <stdio.h>
int main()
{	int a,b;
    printf("Enterr 1st number: ");
    scanf ("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Before intercahnge 1st number is: %d\n",a);
    printf("Before interchange 2nd number is: %d\n\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After intercahnge 1st number is: %d\n",a);
    printf("After interchange 2nd number is: %d",b);
    return 0;
}