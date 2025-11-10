#include <stdio.h>

float temp (float);

float temp (float c){
    return (((9.0/5.0)*c)+32);
}
int main()
{	float c;
    printf("Enter temperature in celcius ");
    scanf("%f",&c);
    printf("%.2f celcius is equals to %.2f fehrenheit",c,temp(c));
    return 0;
}