/*Questão 07. Leitura e Inversão Formatada de Datas — Escreva um programa completo em C
que solicite ao usuário a inserção de uma data no formato dd/mm/aaaa (utilizando as barras como
separadores na digitação) e a exiba em formato invertido aaaa/mm/dd. Use as capacidades
específicas de formatação de string de controle da função scanf().*/

#include <stdio.h>

int main () {
  int dia, mes, ano; //Declaração das variaveis inteiras 

  printf("Digite a data desejada em formato de dd/mm/aaaa "); //print para o usuario
  
  scanf("%d/ %d/ %d", &dia, &mes, &ano); //declaração do input, onde as / são separadores fixos de leitura.

  printf("Data invertida: %d/ %d/ %d", ano, mes, dia);

  return 0;



}