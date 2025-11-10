#include <stdio.h>
int main()
{	int i,j,rc;
    printf("Enter Row and Column number: ");
    scanf("%d",&rc);

    for (i=1;i<=rc;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("*"); 
        }
        printf("\n");
    }
    
    return 0;
}