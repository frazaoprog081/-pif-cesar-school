/*Questão 09. Operações Aritméticas Básicas e Cast de Tipos — Escreva um programa em C que
solicite e leia dois números inteiros do usuário. O programa deve calcular e exibir os resultados

das quatro operações aritméticas básicas (soma, subtração, multiplicação e divisão real). Certifique-
se de que o resultado da divisão seja exibido com duas casas decimais e trate de forma explícita a

divisão real sem perdas de precisão (divisão inteira). Adicione um comentário informando como
evitaria matematicamente a divisão por zero neste capítulo.*/

#include <stdio.h>

int main() {
 int num1, num2;

 printf("Digite dois numeros inteiros:  ");
 scanf("%d, %d", &num1, &num2);

 int soma = num1 + num2;
 int sub = num1 - num2;
 int mult = num1 * num2;
 float div = num1 / num2;

 printf("\nOs numeros foram: %d e %d \n soma: %d \n subtração: %d \n multiplicação: %d \n divisão: %2.f\n", num1, num2, soma, sub, mult, div );

 //para evitar divisões por 0, eu usaria um if (num2 == 0) para deixar uma mensagem de aviso, caso o zero não fosse detectado, o código iria seguir normal do else.



 return 0;



}