#include <stdio.h>
int main()
{	int n,l,s=0;
    printf("Enter number for multiplication table ");
    scanf("%d",&n);

    for(l=1;l<=10;l++)
    {
        printf("%d x %d = %d\n",n,l,n*l);
        s+=n*l;
    }
    printf("Sum of the table of %d is %d",n,s);
    return 0;
}