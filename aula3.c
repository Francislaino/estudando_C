#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade = 0;  
    float peso;
    char nome[10];
    char letra;
    printf("---------------------------------------\n");
    printf("digite sua idade?\n");
    scanf("%d", &idade);
    printf("a idade digitada é %d.\n", idade);
    printf("---------------------------------------\n");
    printf("\n");
    printf("---------------------------------------\n");
    printf("qual e o seu peso?\n");
    scanf("%f", &peso);
    printf("o peso digitado é: %.2f\n", peso);
    printf("---------------------------------------\n");
    printf("\n");
    printf("---------------------------------------\n");
    printf("qual é o seu nome?\n");
    scanf("%s", nome);
    printf("o Nome digitado é: %s\n.", nome);
    printf("---------------------------------------\n");
    printf("\n");
    printf("---------------------------------------\n");
    printf("Digite uma letra.\n");
    scanf(" %c", &letra);
    printf("A letra digitada foi: %c.\n", letra);
    printf("---------------------------------------\n");

    return 0;
}