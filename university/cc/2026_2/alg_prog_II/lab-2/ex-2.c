/*
    Desenvolva um programa para calcular o IMC (Índice de Massa Corporal) de uma
    pessoa.
    
    Seu programa deverá:
    • Solicitar o peso da pessoa (em quilogramas).
    • Solicitar a altura da pessoa (em metros).
    • Calcular o IMC pela fórmula: 𝐼𝑀𝐶 = 𝑝𝑒𝑠𝑜 / 𝑎𝑙𝑡𝑢𝑟𝑎2
    • Imprimir o resultado na tela do computador utilizando uma mensagem no
    formato:
    
    O IMC de uma pessoa com peso __ kg e altura __ m é igual a ___.
    Observação: utilize valores de ponto flutuante para todas as grandezas
    envolvidas.
 */

#include <stdio.h>
#include <math.h>

int main() 
{
    double weight;
    double height;
    double imc; 

    printf("Enter your weight (in kilograms).\n");
    scanf("%lf", &weight);

    printf("Enter your height (in metros).\n");
    scanf("%lf", &height);
    
    imc = weight / pow(height, 2);
    
    printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a %.2f.\n", weight, height, imc);

    return 0;
}
