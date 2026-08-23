/*=== Questão 27 ===*/
/*Escreva um programa em C que solicite ao usuário (usando a função scanf()) um valor
inteiro correspondente a um intervalo de tempo em segundos. O programa deve processar esse dado,
calcular e exibir o equivalente formatado em Horas, Minutos e Segundos restantes (Exemplo: 3665
segundos correspondem a 1 hora, 1 minuto e 5 segundos).*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int temposegundos, horas, min, seg;
    printf("Digite o tempo total em segundos: ");
    scanf("%d", &temposegundos);

    horas = temposegundos/3600;
    min = (temposegundos % 3600) / 60;
    seg = temposegundos % 60;

    printf("O tempo %d segundos, corresponde a:\n %d horas, %d minutos, %d segundos\n", temposegundos, horas, min, seg);


    return 0;
}