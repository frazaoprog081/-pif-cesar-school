/*Questão 18. Geometria da Esfera e Frações de Ponto Flutuante — Crie um programa em C
que leia o raio de uma esfera e calcule sua área de superfície (A = 4 * Pi * R^2) e o seu volume (V
= (4.0/3.0) * Pi * R^3). Defina Pi como 3.141593. Atenção: Garanta que o termo fracionário 4/3
do volume não sofra truncamento de divisão inteira, o que comprometeria gravemente o resultado.*/

#include <stdio.h>


int main() {
    double raio;
    float PI = 3.14;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    double area_superficie = 4.0 * PI * raio * raio;
    double volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Area de superficie da esfera: %.4lf\n", area_superficie);
    printf("Volume da esfera: %.4lf\n", volume);

    return 0;
}