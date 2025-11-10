#include <stdio.h>
int main()
{	int i,j,k,rc;
    printf("Enter the Row and Collumn number: ");
    scanf("%d,&rc");

    for(i=1;i<=rc;i++)  //Row 
    {
        for(j=i;j<rc;j++)  //Space
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)  //Collumn
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}