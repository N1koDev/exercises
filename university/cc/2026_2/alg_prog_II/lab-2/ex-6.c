/*
    Desenvolva um programa semelhante ao anterior, só que com as seguintes
    diferenças:
    • Se o palpite do usuário estiver incorreto, o programa deverá imprimir a dica
    (“você chutou muito baixo” ou “você chutou muito alto”) sem mostrar o
    valor sorteado, incrementar o número de tentativas e dar uma nova chance
    até que ele consiga acertar o número sorteado.
    • Quando o usuário conseguir acertar o número sorteado, o programa deverá
    apresentar a mensagem de parabéns e mostrar o número de tentativas feitas
    pelo usuário até acertar o número.
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
    
    do {
        number = getValidGuess();
        attemps++;

        if (number == lucky){
            printf("Congratulations! You got it right in %d attempts!\n", attemps);
        } else if (number < lucky) {
            printf("Você chutou muito baixo!.\n");
        } else {
            printf("Você chutou muito alto!");
        }
        
    } while (number != lucky);

}

int main() 
{
    srand(time(NULL));
    int lucky = rand() % 100 + 1;

    verifyGuess(lucky);

    return 0;
}