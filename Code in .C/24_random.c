#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ // Seed the random number generator with current time
    srand(time(0));

    int l , n;
    // char ch;

    printf("How many random number(s) you want \n");
    scanf("%d", &n);
    for (l=1;l<= n;l++)
    {

        // Generate random number between 1 and 100
        int randomNumber = rand();

        printf("%d",l);
        if(l % 100>=11 && l % 100 <= 13){
            printf("th");
            // ch ='th';
        }
        else if (l % 10== 1)
        {
            printf("st");
            // ch = 'st';
            
        }
        else if (l % 10== 2)
        {   
            printf("nd");
            // ch = 'nd';
        }
        else if (l % 10== 3)
        {
            printf("rd");
            // ch = 'rd';

        }
        else
        {   
            printf("th");
            // ch = 'th';
        }
        // printf("%c",ch);
        // Print the random number
        printf(" Random number : %d\n", randomNumber);
        
    }

    return 0;
}