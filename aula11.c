#include <stdio.h>

/*float maior( float num1, float num2); // prototipo da funcao

int main(){
    float x, y, m;

    printf("insira um valor:\n");
    scanf("%f", &x);
    printf("insira outro valor:\n");
    scanf("%f", &y);

    m = maior(x,y);


    printf("maior: %.2f\n", m);
}

float maior( float num1, float num2){
    if(num1>num2)
        return num1;
    else
        return num2;
}*/

void imprime1(int v[], int n);

void imprime2(int v[5]);

void imprime3(int *v, int n);

void imprime4(int[][4], int n);

int main(){
    int vet[5] = {1,2,3,4,5};

    printf("imprime1:\n");
    imprime1(vet, 5);
    printf("imprime2:\n");
    imprime2(vet);
    printf("imprime3:\n");
    imprime3(vet, 5);
    printf("imprime4:\n");
    int mat[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    imprime4(mat, 3);

    return 0;
}

void imprime1(int v[], int n){
    int i;
    for(int i=0;i<n;i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void imprime2(int v[5]){
    int i;
    for(int i=0;i<5;i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void imprime3(int *v, int n){
    int i;
    for(int i=0;i<n;i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void imprime4(int m[][4], int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}       

