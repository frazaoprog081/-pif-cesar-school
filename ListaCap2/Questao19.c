/*Questão 19. Cálculo de Salário Líquido com Desconto na Fonte — Uma empresa de prestação
de serviços contrata um encanador à taxa fixa de R$ 30,00 por dia útil trabalhado. Elabore um
programa que solicite ao usuário o número de dias efetivamente trabalhados pelo profissional.
Calcule e imprima a quantia bruta devida e o valor líquido final a ser pago, sabendo que são
descontados estritamente 8% de imposto de renda retido na fonte sobre o total bruto.*/

#include <stdio.h>

int main() {
    int dias_trabalhados;
    const float TAXA_DIARIA = 30.0f;
    const float ALIQUOTA_IR = 0.08f; // 8%

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    float salario_bruto = dias_trabalhados * TAXA_DIARIA;
    float imposto_retido = salario_bruto * ALIQUOTA_IR;
    float salario_liquido = salario_bruto - imposto_retido;

    printf("Valor Bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto Retido (8%%): R$ %.2f\n", imposto_retido);
    printf("Valor Liquido a Receber: R$ %.2f\n", salario_liquido);

    return 0;
}