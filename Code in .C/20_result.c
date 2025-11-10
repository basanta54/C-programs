#include <stdio.h>
int main()
{	int s1,s2,s3;
    
    printf("Mark of 3 subject obtained by the student is ");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1<33||s2<33||s3<33)
    {
        printf("You are failed due to less marks in subject(s)..");
    }
    else
    
        if((s1+s2+s3)/3<40)
    
    printf("You are failed due to less percentage..");
    else
    {
        printf("You are passed!");
    }
    return 0;
}