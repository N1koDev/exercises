/*
    Desenvolva um programa que:
    • Sorteie um número inteiro no intervalo de 1 a 100 (incluindo os valores 1 e 100).
    • Solicite que o usuário tente adivinhar o número sorteado, digitando o seu palpite.
    (se o usuário entrar um valor inválido - menor que 1 ou maior que 100 - o programa deverá 
    refazer a solicitação até que o usuário entre um valor válido).
    • Verifique se o palpite do usuário está correto:
    • Se estiver correto, o programa deverá imprimir na tela “Parabéns!!! Você acertou!”
    • Se o palpite for menor que o número sorteado, deverá imprimir “Você chutou muito baixo! O
    valor correto é xx.” (onde xx é o número sorteado).
    • Se o palpite for maior que o número sorteado, deverá imprimir “Você chutou muito alto! O valor
    correto é xx.” (onde xx é o número sorteado).
    • Crie funções para modularizar o seu programa.
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
    
    do {
        number = getValidGuess();

        if (number == lucky){
            printf("Congratulation! You got it right!");
        } else if (number < lucky) {
            printf("Você chutou muito baixo! O valor correto é %d.\n", lucky);
            break;
        } else {
            printf("Você chutou muito alto! O valor correto é %d.\n", lucky);
            break;
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