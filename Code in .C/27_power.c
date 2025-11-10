#include <stdio.h>
#include <math.h>
int main()
{	int n,p;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter the power of (%d)\n",n);
    scanf("%d",&p);

    if(n==2)
    {
        printf("Squere of %d is = %f",n,pow(n,p));
    }

    else 
    printf("To the power %d of %d is = %.2f",p,n,pow(n,p));
    return 0;
}