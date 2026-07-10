#include <stdio.h>
#include<stdlib.h> 

int main() {


    /*int mat[3][3];

    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;

    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;

    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;

    printf("imprimindo a primeira linha:\n");
    printf("%d %d %d\n", mat[0][0], mat[0][1], mat[0][2]);

    printf("imprimindo a segunda linha:\n");
    printf("%d %d %d\n", mat[1][0], mat[1][1], mat[1][2]);

    printf("imprimindo a terceira linha:\n");
    printf("%d %d %d\n", mat[2][0], mat[2][1], mat[2][2]);*/

    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int i, j;

    printf("imprimindo a primeira linha:\n");
    for(j=0;j<3;j++){
        printf("%d ", mat[0][j]);
    }

    printf("\nimprimindo a matriz completa:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    } 

    return 0;
}