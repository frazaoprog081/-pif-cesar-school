/*=== Questão 24 ===*/
/*Desenvolva um programa em C que organize dados de notas escolares em uma tabela
no console. Seu programa deve usar especificadores de formato e largura de campos para que as
colunas fiquem perfeitamente alinhadas, gerando a saída mostrada abaixo:

ALUNO(A) NOTA
========= =====
ALINE 9.0

Cesar School | Programação Imperativa e Funcional | Página 7

MÁRIO DEZ
SÉRGIO 4.5
SHIRLEY 7.0
*/

#include <stdio.h>

int main() {
   float aline = 9.0;
   float mario = 10;
   float sergio = 4.5;
   float shirley = 7.0;

    printf("%-10s %-6s\n", "ALUNA(O)", "NOTA");
    printf("%-10s %-6s\n", "=======", "=====");
    printf("%-10s %4.2f\n", "ALine", aline);
    printf("%-10s %4.2f\n", "Mario", mario);
    printf("%-10s %4.2f\n", "Sergio", sergio);
    printf("%-10s %4.2f\n", "Shirley", shirley);


    return 0;
}