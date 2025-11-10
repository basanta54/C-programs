#include <stdio.h>
int main()
{	int n;
    printf("Enter the number you want to check if it is prime or not :  ");
    scanf("%d",&n);

    if (n<2)
    {
        printf("The number you entered is not a prime number! ");
    }
    else if (n%(n/2)==0)
        {
            printf("The number you entered is not a prime number! ");

        }
        else
        {
            printf("The number you entered is a prime number! ");

        }
    return 0;
}