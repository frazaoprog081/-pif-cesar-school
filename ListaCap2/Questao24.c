/*Questão 24. Conversor de Velocidade de km/h para m/s — Escreva um programa em C que
leia do teclado uma velocidade expressa em quilômetros por hora (km/h) e exiba o seu valor
convertido e formatado para metros por segundo (m/s). Use a constante física de conversão: m/s =
km/h / 3.6.*/

#include <stdio.h>

int main() {
    float vel_kmh;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &vel_kmh);

    float vel_ms = vel_kmh / 3.6f;

    printf("Velocidade correspondente: %.2f m/s\n", vel_ms);

    return 0;
}