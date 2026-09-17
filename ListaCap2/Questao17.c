/*Questão 17. Geometria do Círculo com Constantes — Escreva um programa em C que leia do
console o valor do raio de um círculo (ponto flutuante). O programa deve calcular e exibir o valor
de sua Área (A = Pi * R^2) e de sua Circunferência (C = 2 * Pi * R). Defina o valor de Pi como a
constante 3.141593.*/

#include <stdio.h>


int main() {
    float raio;
    float PI = 3.14;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    float area = PI * raio * raio;
    float circunferencia = 2.0 * PI * raio;

    printf("Area do circulo: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);

    return 0;
}