#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, soma, sub, multi, divis;

    printf("digite um valor:\n");
    scanf("%d", &a);
    printf("digite outro valor:\n");
    scanf("%d", &b);

    soma = a + b;
    sub = a - b;
    multi = a * b;
    divis = a / b;

    printf("--resultados--\n");
    printf("Soma: %d + %d = %d\n", a, b, soma);
    printf("Subtracao: %d - %d = %d\n", a, b, sub);
    printf("Multiplicacao: %d * %d = %d\n", a, b, multi);
    printf("Divisao: %d / %d = %d\n", a, b, divis);
    
    return 0;
}