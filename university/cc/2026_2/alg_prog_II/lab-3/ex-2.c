/*
Extra 2. Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função deve retornar um valor booleano
 */

#include <stdio.h>
#include <stdbool.h>

bool checkEvenAndOdd(int number) {
    if (number % 2 != 0) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int number;
    
    printf("Enter a Number: \n");
    scanf("%d", &number);

    if (checkEvenAndOdd(number) == true) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}