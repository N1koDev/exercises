/*
    Desenvolva um programa semelhante ao anterior, só que com a seguinte
    diferença:
    • Caso o usuário não consiga acertar o número sorteado após a 5ª tentativa, o
    programa deverá mostrar a mensagem “você excedeu o número máximo de
    tentativas” e mostrar qual era o número sorteado.
    Crie funções para modularizar o seu programa.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getValidGuess() 
{
    int guess;

    printf("Enter your guess (between 1 and 100): \n");
    scanf("%d", &guess);

    while (guess < 1 || guess > 100) {
        printf("Invalid! Only numbers between 1 and 100, please: \n");
        scanf("%d", &guess);
    }

    return guess;
}

void verifyGuess(int lucky) 
{
    int number;
    int attemps = 0;

    for (int attemps = 1; attemps <= 5; attemps++) {

        number = getValidGuess();

        if (number == lucky){
            printf("Congratulations! You got it right in %d attempts!\n", attemps);
            break;
        } else if (number < lucky) {
            printf("You guessed too low!.\n");
        } else {
            printf("You guessed too high!");
        }   
    }

    if (number != lucky) {
        printf("You exceeded the maximum number of attempts! The correct value was %d.\n", lucky);
    }
}

int main() 
{
    srand(time(NULL));
    int lucky = rand() % 100 + 1;

    verifyGuess(lucky);

    return 0;
}