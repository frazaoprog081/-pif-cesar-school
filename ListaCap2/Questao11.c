/*Questão 11. Conversor de Ângulos de Graus para Radianos — Desenvolva um programa que
leia do teclado o valor de um ângulo em graus e o converta em seu equivalente em radianos. Exiba
o resultado final formatado no console. Use a fórmula: radianos = graus * (Pi / 180.0), definindo Pi
como uma constante de 3.141593.*/

#include <stdio.h>

int main() {
 float angulo; 
 
 printf("Digite o angulo em graus que você deseja para converter em radianos:  ");
 scanf("%f", &angulo);


 float Pi = 3.14;
 float rad = angulo * (Pi / 180.0);

 printf("O angulo escolhido foi: %2.f, seu equivalente em radianos é: %2.f", angulo, rad);


 return 0;



}