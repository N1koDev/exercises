/*
    Escreva um o programa que peça para o aluno entrar a sua média (de 0.0 a 10.0) e a sua porcentagem de
    frequência (de 0 a 100%).
    Escreva função que tenha os parâmetros média e a porcentagem e apresente o resultado na tela.
    O seu programa deverá apresentar o resultado do aluno de acordo com as seguintes regras:
    • Se a frequência foi menor que 75%, o aluno está REPROVADO, não importa a nota que ele tirou.
    • Se a frequência foi maior ou igual a 75% e a sua média foi maior ou igual a 7.5, ele está APROVADO.
    • Se a frequência foi maior ou igual a 75% mas a sua média foi menor que 7.5, ele está DE EXAME.
 */

#include <stdio.h>

void calc(double mediam, double frequency)
{
    if (frequency < 75.0) {
        printf("REPROVADO\n");
    } else if (mediam >= 7.5) {
        printf("APROVADO\n");
    } else {
        printf("DE EXAME\n");
    }
}

int main() {
    double mediam, frequency;

    printf("Enter student mediam score (0.0 to 10.0): ");
    scanf("%lf", &mediam);

    printf("Enter student frequency (0.0 to 100): ");
    scanf("%lf", &frequency);

    calc( mediam, frequency );

    return 0;
}