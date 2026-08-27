/*
    ## Extra 1
    
    Faça uma função que recebe a idade de um nadador por parâmetro e retorna, também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo.
    
    Desenvolva um programa e crie uma função para cada funcionalidade:
    
    - Solicite que o usuário digite a idade.
    - Classifique o nadador.
    - Apresente na tela o resultado.
    
    ### Categorias
    
    | Idade | Categoria |
    |---|---|
    | 5 a 7 anos | Infantil A |
    | 8 a 10 anos | Infantil B |
    | 11 a 13 anos | Juvenil A |
    | 14 a 17 anos | Juvenil B |
    | 18 anos ou mais | Adulto |
 */

#include <stdio.h>
#include <string.h>

int requestAge() {
    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);
    
    return age;
}

void classifySwimmer(int age, char category[30]) {
    if (age >= 5 && age <= 7) {
        strcpy(category, "Infantil A");
    } else if (age >= 8  && age <= 10) {
        strcpy(category, "Infantil B");
    } else if (age >= 11 && age <= 13) {
        strcpy(category, "Juvenil A");
    } else if (age >= 14 && age <= 17) {
        strcpy(category, "Juvenil B");
    } else if (age >= 18) {
        strcpy(category, "Adulto");
    } else {
        strcpy(category, "Idade Inválida");
    }
}

int main() {

    int age = requestAge();
    char category[30];
    
    classifySwimmer(age, category);

    printf("%s", category);
    
    return 0;
}