#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    /*int x = 10;
    int *ponteiro;
    ponteiro = &x;

    int y = 20;
    *ponteiro = y;

    printf("%i, %i\n", x, y);

    getchar();*/

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };
    
    struct horario agora, *depois;
    depois = &agora;

    depois->hora = 20;
    depois->minuto = 20;
    depois->segundo = 20;

    printf("\n%i:%i:%i", agora.hora, agora.minuto, agora.segundo );
    
    return 0;
}


