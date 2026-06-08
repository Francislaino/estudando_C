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

   float num1;
   float num2;
   int opcao;
   float resultado;

    printf("====CALCULADORA====\n");
    printf("digite o primeiro numero:\n");
    scanf("%f", &num1);
    printf("digite o segundo numero.\n");
    scanf("%f", &num2);

    printf("\nEscolha qual operaçao deseja realizar:\n");
    printf("1. adição\n");
    printf("2. subtração\n");
    printf("3. multiplicação \n");
    printf("4. divisão \n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
         resultado = num1 + num2;

         printf("a soma de %.2f mais %.2f é igual a %.2f.\n", num1, num2, resultado);
        break;
    case 2:
         resultado = num1 - num2;

         printf("a subtracao de %.2f menos %.2f é igual a %.2f.\n", num1, num2, resultado);
        break;
    case 3:
         resultado = num1 * num2;

         printf("a multiplicação de %.2f vezes %.2f é igual a %.2f.\n", num1, num2, resultado);
        break;
    case 4:
         resultado = num1 / num2;

         printf("a divisão de %.2f divido por %.2f é igual a %.2f.\n", num1, num2, resultado);
        break;
    
    default:
        printf("numero invalido. digite um numero de 1 a 4");
        break;
    }



    




    return 0;
}