/*
Extra 4. Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.
 */

#include <stdio.h>

double idealWeightCalculator(double height, char sex) {
    double calc;

    if (sex == 'M' || sex == 'm') {
        calc = 72.7 * height - 58;
    } else if (sex == 'W' || sex == 'w') {
        calc = 62.1 * height - 44.7;
    } else {
        return -1;
    }

    return calc;
}

int main() {
    char sex;
    double height;
    double weight;

    printf("Enter your sex (M for man and W for woman): ");
    scanf(" %c", &sex);

    printf("Enter your height in meters: ");
    scanf("%lf", &height);

    weight = idealWeightCalculator(height, sex);

    if (weight == -1) {
        printf("Invalid sex.\n");
    } else {
        printf("Your ideal weight is: %.2f kg\n", weight);
    }

    return 0;
}