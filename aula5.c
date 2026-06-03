#include <stdio.h>
#include <stdlib.h>

int main() {



    /*char nome[20];
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
        printf("Sua media anual e:%.2f, parabens %s, voce foi aprovado.\n", media, nome);
    } else {
        printf("sua media anual e: %.2f, que pena %s, voce foi reprovado;\n",media, nome);
    }*/

    int opcao;

    printf("Digite um numero de 1 a 7:\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Domingo.\n");
        break;
    case 2:
        printf("segunda\n");
        break;
    case 3:
        printf("Terca\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta.\n");
        break;
    case 7:
        printf("Sabado.z\n");
        break;
    default:
        printf("digite um numero de 1 a 7.\n");
        break;
    }





    return 0;
}