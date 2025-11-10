//program to find out the maximum among 3 numbers
#include <stdio.h>

int main() 
{
    int a,b,c,min;
    printf("Enter value for A: ");
    scanf("%d",&a);
    printf("Entee value for B: ");
    scanf("%d",&b);
    printf("Enter value for C: ");
    scanf("%d",&c);
    
    min=(a<b)?((a<c)?a:c):((b<c)?b:c);
    printf("Manimum is %d",min);
    
    return 0;
}