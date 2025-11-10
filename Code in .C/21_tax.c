#include <stdio.h>
int main()
{	int i,tax=0;
    printf("Anual income of the empployee (in lakh)is ");
    scanf("%.2f",&i);
    
    if (i<2.5)
    {
        printf("Total payable interest = %.2f",((i*100000)*.0));
    }
    else
        if(i>=2.5&&i<5.0)
        {
            
        }
        else
            if(5.0>=i<10.0)
            {
                 
            }
            else
                if(i>=10.0)
                {
                    
                }
    
    
    return 0;
}