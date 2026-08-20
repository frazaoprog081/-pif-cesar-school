/*=== Terceira questão ===*/
#include <stdio.h> /*Importanto a blibioteca do print*/

/*abrindo a função main*/
int main(){ /*corpo da função*/
    int idade = 18; /*declarando a variavel inteira idade*/
    float ingresso = 2026.1; /*declarando a variavel float ingresso*/
    float conclusão = 2028.1; /*declarando a variavel float conclusão*/

    /*Print do texto inserindo as variaveis atraves do % e suas respectivas letras, adcionando elas no final para o programa entender a ordem de execução do print*/
    printf("Meu nome é Luma, tenho %d, entrei no cesar no semestre %.1f e irei concluir o curso no semestre %.1f", idade, ingresso, conclusão);
    return 0;  /*encerrando o programa */
}