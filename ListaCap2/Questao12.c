/*Questão 12. Operadores Unários de Antecessor e Sucessor — Elabore um programa em C que
receba um número inteiro do usuário e, utilizando exclusivamente os operadores unários de
incremento (++) e decremento (--), exiba o seu antecessor e o seu sucessor no console,
justificando sua implementação lógica.*/

#include <stdio.h>

int main() {
 int num;

 printf("Digite um numero para saber seu sucessor e seu antecessor:  ");
 scanf("%d", &num);

 int antecessor = --num;
 int sucessor = ++num + 1;

 printf("O numero escolhido foi: %d\n seu antecessor: %d\n seu sucessor: %d\n", num, antecessor, sucessor);


 return 0;


}