/*Questão 13. Cálculo de Áreas de Figuras Planas Básicas — Crie um programa unificado em C
que ofereça suporte ao cálculo de três geometrias fundamentais. O usuário deve fornecer os dados
necessários e o programa exibirá: a) A área de um quadrado de lado L; b) A área de um retângulo
de base B e altura H; c) A área de um triângulo retângulo de base B e altura H. Todos os valores
de entrada e saída devem ser numéricos de ponto flutuante.*/

#include<stdio.h>

int main(){

 float lado_quadrado;
    float base_ret, altura_ret;
    float base_tri, altura_tri;

    
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado_quadrado);
    printf("Area do quadrado: %.2f\n", lado_quadrado * lado_quadrado);

    
    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base_ret, &altura_ret);
    printf("Area do retangulo: %.2f\n", base_ret * altura_ret);

    
    printf("Digite a base e a altura do triangulo retangulo: ");
    scanf("%f %f", &base_tri, &altura_tri);
    printf("Area do triangulo retangulo: %.2f\n", (base_tri * altura_tri) / 2.0);

    return 0;





}