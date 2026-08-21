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