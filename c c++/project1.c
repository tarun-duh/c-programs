#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, guesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        printf("guess the  no. btw 1-100\n");
        scanf("%d", guess);
        if (guess > number)
        {
            printf("lower no. pls\n");
        }
        else if (guess < number)
        {
            printf("higher no. pls\n");
        }
        else
        {
            printf("you guessed the no in %d attempts\n", guesses);
        }
        guesses++;

    } while (guess != number);

    return 0;
}