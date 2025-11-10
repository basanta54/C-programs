
//Using Do-while loop

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100 + 1) ;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", randomNumber);

    int time_guessed=0,guessed_number;


    do{
        printf("Guess a number (1-100) ");
        scanf("%d",&guessed_number);
        if (guessed_number<randomNumber)
        {
        printf("Higher number please!\n");
        }
        else if(guessed_number>randomNumber)
        {
            printf("Lower number please!\n");
        }
  
        time_guessed++;    
    }while (guessed_number!=randomNumber);
    {
        printf("Victory!\n");
    }
    printf("You took %d guesses",time_guessed);
    return 0;
}
