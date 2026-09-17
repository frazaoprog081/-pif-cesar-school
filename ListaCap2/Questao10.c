/*Questão 10. Conversão de Temperatura de Celsius para Fahrenheit e Kelvin — Escreva um
programa em C que leia uma temperatura expressa em graus Celsius (float ou double) e mostre na
tela o seu valor convertido para duas escalas termométricas: graus Fahrenheit e Kelvin. As fórmulas
de conversão são: F = (C * 9/5) + 32 e K = C + 273.15.*/

#include <stdio.h>

int main() {
 float temp; 

 printf("Digite a temperatura em celcius que você deseja converter:  ");
 scanf("%f", &temp);

 float Fahrenheit = (temp * 9/5) + 32;
 float Kelvin = temp + 273.15;

 printf("A temperatura escolhida foi: %2.f \n Fahrenheit: %2.f \n Kelvin: %2.f \n ", temp, Fahrenheit, Kelvin);



 return 0;






}