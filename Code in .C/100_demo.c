#include <stdio.h>

// Function prototype
int change(int);

// Function definition
int change(int a){
    // a=10;
    return a;
}
int main()
{	
    int  x=change(20);
    
    printf("%d\n",x);

    int  y=change(15);
    
    printf("%d\n",y);
    return 0;
}