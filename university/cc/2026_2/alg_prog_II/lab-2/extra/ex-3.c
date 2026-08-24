/*
 Extra 3. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S. S = 1 + ½ + 1/3 + ¼ + 1/5 + 1/N.
 */

#include <stdio.h>
double calculator(int N) {
  double S = 0.0;

  for (int i = 1; i <= N; i++) {
    S = S + (1.0 / i);
  }

  return S;
}

int main() {
  int N;
  double S;
  
  printf("Enter a number: \n");
  scanf("%d", &N);
  
  S = calculator(N);

  printf("Result: %.2lf\n", S);

  return 0;
}