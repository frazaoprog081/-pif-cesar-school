/*=== Questão 22 ===*/
/*Desenhe no console um carro e uma caminhonete utilizando caracteres de bloco e de
controle estudados no capítulo. Utilize sequências de escape em hexadecimal (como \xDC e \xDF) para
renderizar a seguinte arte gráfica:*/
#include <stdio.h>

int main() {
    /*Carro*/
    printf("  \xDC\xDC\xDC\xDC\n");
    printf("\xDC\xDF\xDF\xDF\xDF\xDF\xDC\n");
    printf("\xDFO\xDF\xDF\xDFO\xDF\n\n");

    /*Caminhonete*/
    printf("  \xDC\xDC\xDC\xDC\xDC\xDC\xDC\n");
    printf("\xDC\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDC\n");
    printf("\xDFO\xDF\xDF\xDF\xDFOO\xDF\n");

    return 0;
}