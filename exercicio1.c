#include <stdio.h>
 
int main() {
    int idade = 26;
    float altura = 1.77;
    char opcao = 'J';
    char nome[20] = "Joao";
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("A opção é: %c\n", opcao);

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);
     
    return 0;
}