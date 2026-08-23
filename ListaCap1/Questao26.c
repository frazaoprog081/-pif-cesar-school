/*=== Questão 26 ===*/
/*Elabore um programa em C que utilize caracteres para desenhar um 'pinheiro de Natal'
estilizado no console. Enriqueça o desenho adicionando outros caracteres (como *, o, +) simulando
enfeites espalhados pela árvore:

X
X*X
X+XoX
X*X+X*X
XXXXXXXXX
XX
XX
XXXX */

#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("X\n");
    printf("XX\n");
    printf("X*XoX\n");
    printf("XX*XXXo\n");
    printf("XXXXoXXX*\n");
    printf("XX*XXX*\n");
    printf("XX*Xo\n");
    printf("XX*Xo\n");
    printf("XX\n");
    printf("XX\n");
    return 0;
}