#include <stdio.h>
int main()
{	int principle,time;
    float interest , si;
    printf("Enter Principle "); //input principle
    scanf("%d",&principle);
    printf("Enter Rate of Interest "); //input rate of interest
    scanf("%f",&interest);
    printf("Enter time "); //input time
    scanf("%d",&time);
    si=(principle*interest*time)/100; //calculate Simple interest
    printf ("Simple interest = %.2f",si);

    return 0;
}