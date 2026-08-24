/*
    Escreva um programa em C que solicite que o usuário forneça dois números
    inteiros e imprima o resultado da soma, subtração, multiplicação e divisão
    inteira desses números.
*/

#include <stdio.h>

int main() {
    int first_number;
    int second_number;

    printf("Digite o primeiro numero: ");
    scanf("%d", &first_number);

    printf("Digite o segundo numero: ");
    scanf("%d", &second_number);

    // Realizando e imprimindo todas as operações solicitadas
    printf("Soma: %d\n", first_number + second_number);
    printf("Subtracao: %d\n", first_number - second_number);
    printf("Multiplicacao: %d\n", first_number * second_number);
    
    // Tratamento básico para evitar erro de divisão por zero
    if (second_number != 0) {
        printf("Divisao inteira: %d\n", first_number / second_number);
    } else {
        printf("Divisao inteira: Indefinida (divisao por zero)\n");
    }

    return 0;
}