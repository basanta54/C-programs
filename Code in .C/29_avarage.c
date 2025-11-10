#include <stdio.h>

float avarage(int,int,int);

float avarage(int a,int b,int c){
 return (a+b+c)/3.0;
}
int main()
{	int a=2,b=4,c=6;
    
    printf("Avarage of a,b,c is %.2f",avarage(a,b,c));
    return 0;
}