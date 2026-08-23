/*=== Questão 21 ===*/
/*Desenvolva três versões independentes de programas em C para produzir no console a
saída de texto abaixo. A primeira versão deve usar uma única chamada de printf(); a segunda deve usar
exatamente duas instruções de impressão independentes; e a terceira deve desenhar as frases
emolduradas utilizando caracteres gráficos de caixa:

Treinamento em programação.
Linguagem C.*/

/*#include <stdio.h>
#include <stdlib.h>
int main(){
   printf("Treinamento em programação.\nLinguagem C.\n");
}*/

/*#include <stdio.h>
#include <stdlib.h>
int main(){
   printf("Treinamento em programação.\n");
   printf("Linguagem C.\n");
}*/

/*#include <stdio.h>

int main() {
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA Treinamento em programacao. \xBA\n");
    printf("\xBA Linguagem C.                \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    return 0;
}*/
