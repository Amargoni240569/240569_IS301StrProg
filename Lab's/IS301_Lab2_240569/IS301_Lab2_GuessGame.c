
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* -------- Function Prototypes -------- */

/* Function to get user guess */
int getGuess();

/* Function to print hint messages */
void printHint(int guess, int number);

/* Function to print success message */
void printSuccess();

/* Function to print failure message */
void printFailure(int number);


/* -------- Main Function -------- */

int main()
{
    int randomNumber;
    int guess;
    int i;

    /* Seed random number generator */
    srand(time(NULL));

    /* Generate number between 1 and 20 */
    randomNumber = rand() % 20 + 1;

    printf("I am thinking of a number between 1 and 20.\n");
    printf("Can you guess what it is?\n\n");

    /* Loop for five attempts */
    for(i = 1; i <= 5; i++)
    {
        /* Get user guess */
        guess = getGuess();

        /* Check if guess is correct */
        if(guess == randomNumber)
        {
            printSuccess();
            return 0;  /* terminate program immediately */
        }
        else
        {
            /* Give hint */
            printHint(guess, randomNumber);
        }
    }

    /* If loop finishes without correct guess */
    printFailure(randomNumber);

    return 0;
}


/* -------- Function Definitions -------- */

/*
Function: getGuess
Purpose : Ask user for a number guess
Returns : integer guess
*/
int getGuess()
{
    int guess;

    printf("Enter your guess: ");
    scanf("%d", &guess);

    return guess;
}


/*
Purpose : Tells user if guess is too high or too low
*/
void printHint(int guess, int number)
{
    if(guess < number)
    {
        printf("Your guess is low. Try again.\n\n");
    }
    else if(guess > number)
    {
        printf("Your guess is high. Try again.\n\n");
    }
}


/*
Purpose : Prints message when user guesses correctly
*/
void printSuccess()
{
    printf("\nCongratulations! You did it.\n");
}


/*
Purpose : Prints message after 5 incorrect attempts
*/
void printFailure(int number)
{
    printf("\nSorry. The number was %d.\n", number);
    printf("You should have gotten it by now.\n");
    printf("Better luck next time.\n");
}
