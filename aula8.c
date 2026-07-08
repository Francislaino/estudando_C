#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <locale.h>

#define N 20

int main (){
    setlocale(LC_ALL,"Portuguese");

    //char s [10];

    /*printf("digite algo (scanf convencional):\n");
    scanf("%s", s);
    fflush(stdin);

    printf("resultado: %s\n\n", s);

    printf("digite algo (scanf aprimorado):\n");
    scanf("%10[^\n]s", s);
    fflush(stdin);

    printf("resultado: %s\n\n", s);*/
//----------------------------------------------------------------------
    /*printf("Digite algo (leitura pelo gets):\n");
    gets(s);
    fflush(stdin);

    puts("Resultado:");
    puts(s);
    puts("");

    printf("digite algo (leitura pelo fgets):\n");
    fgets(s,10, stdin);

    puts("Resultado:");
    puts(s);*/

//--------------------------------------------------------------------------

    /*
    char origem[N] = {"Olá, mundo!"};
    char destino[N];

    printf("antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem); //copia a string origem para destino

    printf("depois do strcpy:\n");
    puts(origem);
    puts(destino);*/

//--------------------------------------------------------------------------

    /*char s1[N] = {"Lógica de"};
    char s2[N] = { " programação"};

    printf("antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);
    
    strcat(s1,s2); //concatena a string s2 no final da string s1
    
    printf("depois do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);*/

//--------------------------------------------------------------------------
    /*char s[N];
    int i;

    printf("digite um texto:\n");
    gets(s);
    i = strlen(s); //strlen retorna o tamanho da string
    printf("\nTamanho do texto: %d\n\n", i);

    printf("impressão de posição a posição:\n");
    for(i=0;i<strlen(s);i++){
        printf("%c", s[i]);
    }*/
//---------------------------------------------------------------------------
    char hardText[N] = {"/exit"};
    char senha_urs[N];
    int ok;
    printf("digite um texto:\n");
    gets(senha_urs);
    ok = strcmp(hardText, senha_urs);//strcmp compara duas strings, se forem iguais retorna 0, se a primeira for maior que a segunda retorna >0, se a segunda for maior que a primeira retorna <0

    if (ok == 0)
        printf("textos iguais.\n");
    else
        printf("textos diferentes.\n");

    



    return 0;
}