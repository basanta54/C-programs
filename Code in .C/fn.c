#include <stdio.h>

// function prototype
float avarage(int x,int y,int z);

// function definition 
float avarage(int x,int y,int z){
    // (x+y+z)/3.0;
    return((x+y+z)/3);
}
int main()
{	int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    // float A = avarage(a,b,c);
    printf("Tne avarage of %d,%d,%d is %f",a,b,c,avarage(a,b,c));
    return 0;
}