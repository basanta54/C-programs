#include <stdio.h>
float force(float );

float force(float x){
    return (x*9.8);
}
int main()
{	float m =1;
    printf("The force on the body mass(m) is %.2f\n",m);
    return 0;
}