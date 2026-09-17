/*Questão 25. Salário Líquido com Gratificação e Tributação — Faça um programa em C que leia
o salário-base de um funcionário. O programa deve calcular e exibir o salário líquido a receber
sabendo que esse funcionário tem uma gratificação fixa de 5% sobre o seu salário-base (adicional),
mas paga um imposto retido de 7% também calculado sobre o seu salário-base. Justifique a
fórmula matemática do cálculo através dos operadores aritméticos.*/

#include <stdio.h>

int main() {
    float salario_base;

    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salario_base);

    float gratificacao = salario_base * 0.05f;
    float imposto = salario_base * 0.07f;
    float salario_liquido = salario_base + gratificacao - imposto;

    printf("Salario-base: R$ %.2f\n", salario_base);
    printf("Gratificacao (+5%%): R$ %.2f\n", gratificacao);
    printf("Imposto (-7%%): R$ %.2f\n", imposto);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}