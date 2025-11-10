#include <stdio.h>

float convert(float);

float convert(float a){
    // (((9.0/5.0)*a)+32);
    printf("ferenheit temperature is %.2f\n\n",(((9.0/5.0)*a)+32));
    return (((9.0/5.0)*a)+32);
}
int main()
{	
    float c0=0;
    convert(c0);
    // printf("1 ferenheit temperature is %.2f\n",convert(c0));


    

    float c1=1;
    convert (c1);
    // printf("2 ferenheit temperature is %.2f",convert(c));
    

    float c2=2;
    convert (c2);
    // printf("3 ferenheit temperature is %.2f",convert(c));
   

    float c3=3;
    convert (c3);
    // printf("4 ferenheit temperature is %.2f",convert(c));
   

    float c4=4;
    convert (c4);
    // printf("5 ferenheit temperature is %.2f",convert(c));
    

    float c5=5;
    convert (c5);
    // printf5("6 ferenheit temperature is %.2f",convert(c));
    return 0;

    
}