/*Questão 08. Potências e Divisão com Ponto Flutuante — Desenvolva um programa em C que
leia do teclado um número inteiro fornecido pelo usuário. O programa deve calcular e exibir:
 a) O seu quadrado (valor inteiro); 
 b) A sua décima parte (valor real, com precisão de duas casas
decimais). 
Garanta que o cálculo da décima parte não sofra de truncamento de divisão inteira.*/

#include <stdio.h>

int main(){
 int numero;

 printf("Digite um numero inteiro:  ");
 scanf("%d", &numero);

 int quadrado = numero * numero;

 float dec_parte = numero / 10;

 printf("\nO numero escolhido foi: %d \n Quadrado: %d \n Decima parte: %2.f \n", numero, quadrado, dec_parte);

 return 0;



}