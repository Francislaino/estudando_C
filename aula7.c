#include <stdio.h>
#include <stdlib.h>

int main(){

    /*int v[5];

    float m;

    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    m = ( v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf("Resultado: %f\n", m);*/

    /*int v[5] = {10, 20, 30, 40, 50};
    int i;
    float s = 0;

    for (i=0; i<5; i++){
        s += v[i];
       // printf(" S: %f\n i: %d\n", s, i);
    }

    printf("Resultado: %f\n", s/5);*/

    int v[5];
    int i;
    float media = 0;

    for(i=0;i<5;i++){
        printf("insira um dado:\n");
        scanf("%d", &v[i]);
    }

    printf("dados inseridos:\n");
    for(i=0;i<5;i++){
        printf("%d ", v[i]);
        media += v[i];
    }

    printf("A media e: %f\n", media);

    return 0;
}