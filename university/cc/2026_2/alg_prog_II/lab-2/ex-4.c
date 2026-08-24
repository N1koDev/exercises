/*
    Um triângulo possui 3 lados com tamanhos a, b e c.
    Para que um triângulo exista, um lado deve ser menor que a soma dos outros dois, ou seja, as
    seguintes condições devem ser satisfeitas:
    • a < b + c
    • b < a + c
    • c < a + b
    Desenvolva um programa que:
    • Solicite que o usuário digite os tamanhos dos lados do triângulo (a, b e c).
    • Verifique se existe um triângulo com estes lados.
    • Apresente na tela o resultado.
    Escreva uma função para verificar se o triângulo existe e outra para apresentar o resultado.
 */

#include <stdio.h>
#include <stdbool.h>

bool verify_triangle(double a, double b, double c) 
{
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        return true;
    }
    return false;
}

void print_result(bool is_triangle) 
{
    if (is_triangle) {
        printf("It is a triangle.\n");
    } else {
        printf("It is not a triangle.\n");
    }
}

int main() 
{
    double a, b, c;

    printf("Enter the first measure: \n");
    scanf("%lf", &a);

    printf("Enter the second measure: \n");
    scanf("%lf", &b);

    printf("Enter the third measure: \n");
    scanf("%lf", &c);

    bool exists = verify_triangle(a, b, c);
    print_result(exists);

    return 0;
}