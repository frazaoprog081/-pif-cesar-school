**Questão 4**  
**Um estudante iniciante de programação em C escreveu o programa abaixo e encontrou
diversos erros que impedem a sua compilação. Analise o código atentamente, aponte cada um dos
erros presentes e escreva a versão corrigida e funcional desse programa:**

*#include <stdio.h>   
#include <stdlib.h>;  
int Main{}  
(  
printf( Existem %d semanas no ano.,52);  
cout << endl;  
system("PAUSE");  
return 0;  
)*    
**Resposta:** Está incorreto pois ele não abriu a função main corretamente - nome com letra maiuscula, chaves no lugar errado e os parenteses não eram pra ser usados -, o printf também está errado, pois ele não possui as aspas para indicar o texto que será imprimido e a variavel dentro dele nem foi declarada. Além disso, ponto e virgula após a declaração da biblioteca e o "cout << endl;", o qual não faz parte da linguagem c.  

**Questão 5**  
**Analise o seguinte trecho de código em C. Sob a perspectiva do padrão ANSI C, o
programa está correto para compilação e execução imediata? Caso negativo, descreva quais elementos
cruciais e diretivas estão faltando no código abaixo:**

*main()  
{  
printf("Linguagem C");  
system("pause");  
}*  
**Resposta:** O codigo não possui as direitivas das bibliotecas "#include <stdio.h>" e "#include <stdlib.h>" para conseguir executar o "printf" e o "system", a função "main" também está incorreta, pois falta o int, seu retorno. Além disso, é recomendado adicionar o "return 0" ao final de todo programa em c.  

**Questão 6**  
**Identifique e liste todos os erros de sintaxe (que violam as regras da linguagem C) e de
lógica contidos no programa abaixo:**

*main()  
{  
int a=1; b=2; c=3:  
printf("0s números são: %d%d%d\n, a, b, c, d);  
system("pause");  
}*  
**Resposta:** Sem declaração das direitivas "#include <stdio.h>" e "#include <stdlib.h>" para a execução do printf e do system, respectivamente. Variaveis declaradas incorretamente e dois pontos no final da linha ao invés do ";". A sintaxe do printf está incorreta, devido a falta do fechamento das aspas antes da declaração das variaveis que irão aparecer no texto. A variavel "D" nem aparece no código. Sem return no final do programa.  

**Questão 7**  
**Descreva a saída exata (incluindo quebras de linha e tabulações) que será impressa no
console por cada uma das seguintes instruções independentes do printf():**  
*a) printf("\n\tBom dia! Shirley.");  
b) printf("Você já tomou café? \n");  
c) printf("\n\nA solução não existe!\nNão insista.");  
d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?");  
e) printf("%s\n%s\n%s\n", "um", "dois", "três");*  
**Resposta:**  
a) Bom dia!Shirley.  
b) Você já tomou café?  
c) A solução não existe!  
  Não insista.  
d) Duas linhas  de  saída  
ou  uma?  
e) um   
dois   
três    

**Questão 8**  
**Explique detalhadamente o comportamento do programa abaixo quando executado no
console. Apresente qual será a saída exata gerada pelas sequências de escape utilizadas no formato de
controle:**

*#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
printf("\n\t\"Primeiro programa\"");  
system("PAUSE");  
return 0;  
}*  
**Resposta:**  
\n, o cursor pula para a linha seguinte  
\t, depois de pular uma linha, o programa avança uma tabulação (TAB)  
" , coloca aspas dentro da String  
  system("PAUSE") -> pausa a execução   
  *Saida do printf: "Primeiro programa"*  

  **Questão 9**  
  **Determine a saída exata do programa a seguir e explique como o compilador C
interpreta os argumentos do tipo caractere simples ('\n', '\t', '\"') passados para o modificador %c:**

*#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');  
printf("%c", "\"");  
system("PAUSE");  
return 0;  
}*  
**Resposta:**  Saída do primeiro printf:

O %c indica que o printf espera um caractere (char) para cada %c.

'\n' -> pula uma linha 2.  
'\t' -> insere uma tabulação  
 3.'"' -> imprime aspas  
 *Saida do printf:*   "Primeiro programa"  

 **Questão 10:**  
 **10. A Linguagem C é conhecida por ser sensível a caixa alta e baixa (case sensitive). Explique
o significado prático desse conceito. Identificadores como 'peso', 'Peso' e 'PESO' representam a mesma
variável na memória? Assinale a alternativa correta e complemente com sua justificativa:**  
a) Depende exclusivamente da implementação   do compilador utilizado no sistema.    
**b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).**    
c) Falso (letras maiúsculas e minúsculas são interpretadas como equivalentes pelo compilador).   

**Questão 11**  
**Para cada um dos valores constantes descritos na tabela abaixo, indique a classificação
correta (por exemplo: constante inteira decimal, constante de ponto flutuante, constante de caractere,
constante string ou sequência de escape) e o tipo de dado base correspondente em C (como char, int,
float, double):**  
| Constante Classificação | Tipo de Constante | Tipo Base em C |
| :--- | :---: | ---: |
|\r |Sequencia de escape| char|
|2130|	Constante inteira decimal|	int|
|-123 |Constante inteira decimal| int|
|33.28 |Constante flutuante| Double|
|0XFA |Constante inteira hexadecimal |int|
|0101 |Constante inteira binaria| int |
|2.0e30| Constante de ponto flutuante (Notação científica)| double|
|\xDC |Sequência de escape|char|
|'\"' |Consstante de caractere| char|
|'\\'| Constante de caractere |char|
|'F'|Constante de caractereConstante|char|
|0 |Constante inteira decimal|Int|
|'\0' |Constante de caractere / Sequência de escape| char|
|"F" |Constante string| char[] ou char *|
|-4567.89| Constante de ponto flutuante | double |  

**Questão 12**  
**A declaração de variáveis define o tipo e o identificador de cada espaço reservado na
memória. Analise cada uma das declarações na tabela a seguir, preencha o seu status (Correto ou
Incorreto) e, caso seja incorreto, justifique detalhadamente o erro sintático:**  
|InstruçãoStatus| (C/I)Justificativa| Teórica|
| :--- | :---: | ---: |
|a) int a;|	Correto	Declaração sintaticamente válida de uma variável inteira do tipo int.|
|b) float b;|	Correto	|Declaração sintaticamente válida de uma variável de ponto flutuante de precisão simples.|
|c) double float c;|	Incorreto|	Combinação inválida de tipos. Os especificadores double e float são tipos base distintos e mutuamente exclusivos; double não é um modificador de float.|
|d) unsigned char d;|	Correto|	Declaração válida usando o modificador de sinal unsigned sobre o tipo base char.|
|e) unsigned e;|Correto|Válido. Na linguagem C, o uso do modificador unsigned sem especificar o tipo base subentende implicitamente o tipo int (unsigned int).|
|f) long float f;|	Incorreto|	O modificador de tamanho long não pode ser combinado com o tipo float pelo padrão ANSI/ISO C. Para precisão expandida, deve-se utilizar double ou long double.|
|g) long g;|	Correto	|Válido. O uso do modificador long de forma isolada é uma abreviação sintática para long int.|
|h) long double h;|	Correto|	Declaração válida do tipo de ponto flutuante com precisão estendida (long é um modificador válido para double).|