#include<stdio.h>

int main()

{
    int r,c,s,i;
    printf("Enter the line number: ");
    scanf("%d",&i);

    for(r=1;r<=i;r++)
    {
        for(s=1;s<r;s++)
        {
            printf("A");
        }
    }

    return 0;
}