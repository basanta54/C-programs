#include <stdio.h>
int main()
{	int n,i=1,product=1;
    printf("Enter Number ");
    scanf("%d",&n);

        {
            // for(i=1;i<=n;i++)    //using for loop
            while (i<=n)            //using while loop
            {
                product*=i;
                i++;
            }
            printf("Factorial value of given number is %d",product);
        }
    return 0;
}