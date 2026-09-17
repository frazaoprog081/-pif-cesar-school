/*Questão 26. Orçamento para Cercamento Perimetral de Terrenos — Desenvolva um programa
para cercamento de terrenos agrícolas. O programa deve ler do teclado: a) O comprimento e a
largura do terreno em metros; b) O preço unitário do metro de arame farpado (em reais). Sabendo
que o cercamento de segurança exige exatamente 3 fios de arame esticados ao longo do
perímetro do terreno, calcule e mostre na tela quantos metros de arame farpado devem ser
comprados e o custo total do cercamento.*/

#include <stdio.h>

int main() {
    float comprimento, largura, preco_metro;

    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);
    printf("Digite o preco do metro do arame farpado (R$): ");
    scanf("%f", &preco_metro);

    float perimetro = 2.0f * (comprimento + largura);
    float total_metros_arame = perimetro * 3.0f; // 3 fios de arame
    float custo_total = total_metros_arame * preco_metro;

    printf("Quantidade total de arame necessaria: %.2f metros\n", total_metros_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);

    return 0;
}