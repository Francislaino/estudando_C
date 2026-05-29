#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 // calculadora de indice de massa corporal

 //constante para o calculo do indice de massa corporal
#define IMC_CONSTANTE 703

// prototipo da função para calcular o indice de massa corporal
float calcular_imc(float peso, float altura);
// prototipo da função para exibir o resultado do indice de massa corporal
void exibir_resultado(float imc);
//prototipo para classificar o resultado do indice de massa corporal
void classificar_imc(float imc);


int main() {
    float peso, altura, imc;

    // solicita ao usuário o peso e a altura
    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    // calcula o indice de massa corporal
    imc = calcular_imc(peso, altura);

    // exibe o resultado
    exibir_resultado(imc);
    // classifica o resultado
    classificar_imc(imc);

    return 0;
}

// função para exibir o resultado do indice de massa corporal
void exibir_resultado(float imc) {
    printf("Seu indice de massa corporal (IMC) é: %.2f\n", imc);
}

// função para classificar o resultado do indice de massa corporal
void classificar_imc(float imc) {
    if (imc < 18.5) {
        printf("Você está abaixo do peso.\n");
    } else if (imc < 25) {
        printf("Você está com peso normal.\n");
    } else if (imc < 30) {
        printf("Você está com sobrepeso.\n");
    } else {
        printf("Você está obeso.\n");
    }
}

// função para calcular o indice de massa corporal
float calcular_imc(float peso, float altura) {
    // converte a altura de metros para polegadas
    float altura_polegadas = altura * 39.3701;
    // converte o peso de quilogramas para libras
    float peso_libras = peso * 2.20462;
    // calcula o indice de massa corporal usando a fórmula: IMC = (peso em libras / (altura em polegadas)^2) * constante
    float imc = (peso_libras / (altura_polegadas * altura_polegadas)) * IMC_CONSTANTE;
    return imc;
}


