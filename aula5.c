#include <stdio.h>
#include <stdlib.h>

int main() {

    char nome[20];
    float nota1, nota2, nota3, nota4, media;

    printf("digite o nome do aluno:\n");
    scanf("%s", nome);
    printf("digite a nota do primeiro semestre:\n");
    scanf("%f", &nota1);
    printf("digite a nota do segundo semestre:\n");
    scanf("%f", &nota2);
    printf("digite a nota do terceiro semestre:\n");
    scanf("%f", &nota3);
    printf("digite a nota do quarto semestre:\n");
    scanf("%f", &nota4);


    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7) {
        printf("Sua media anual é:%.2f, parabens %s, voce foi aprovado.\n", media, nome);
    } else {
        printf("sua media anual é: %.2f, que pena %s, voce foi reprovado;\n",media, nome);
    }



    return 0;
}