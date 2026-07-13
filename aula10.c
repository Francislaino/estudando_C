#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50
#define LIST 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");
    

    tipo_pessoa lista[LIST];
    int i;

    for(i=0;i<LIST;i++){
        printf("Insira os dados (%d):\n", i+1);
        puts("nome: ");
        fgets(lista[i].nome, 50, stdin);
        fflush(stdin);
       


        puts("idade: ");
        scanf("%d",&lista[i].idade);
        fflush(stdin);
        
        
        puts("peso: ");
        scanf("%f",&lista[i].peso);
        fflush(stdin);
    }

    

    puts("seus dados:\n");
    for(i=0;i<LIST;i++){
        printf("----------- pessoa %d -----------\n");
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tpeso: %.2f\n", lista[i].peso);

    }
    printf("-----------------------------------------\n");




    return 0;

}


