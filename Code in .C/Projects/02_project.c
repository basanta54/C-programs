
//Using Do-while loop

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // Print the random number
    printf("Random number between 1 and 100: %d\n", randomNumber);

return 0;
}