#include<stdio.h>
main()
{
    int i,j,rc;
    printf("Enter the Row and Column number: ");
    scanf("%d",&rc);
    

    for (i=rc;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf ("\n");
    }
}