/*Questão 15. Cálculo de Média Aritmética Simples e Ponderada — Desenvolva um programa
que leia quatro notas escolares de um aluno. Calcule e exiba no console: a) A média aritmética
simples das notas; b) A média ponderada das notas, assumindo que as provas possuem os
seguintes pesos sequenciais: Peso 1 para as provas 1 e 2, e Peso 2 para as provas 3 e 4. Ambos
os resultados devem ser representados com duas casas decimais.*/

#include <stdio.h>

int main() {
    float n1, n2, n3, n4;

    printf("Digite as quatro notas do aluno: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float media_simples = (n1 + n2 + n3 + n4) / 4.0;
    float media_ponderada = (n1 * 1.0 + n2 * 1.0 + n3 * 2.0 + n4 * 2.0) / 6.0;

    printf("Media Aritmetica Simples: %.2f\n", media_simples);
    printf("Media Ponderada: %.2f\n", media_ponderada);

    return 0;
}