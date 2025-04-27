/* 
Nome Gabriel Santos Afini da Silva
RA 2267284
Linguagem de programação-IF62B
---------------------------------------------------------------------------------------------
Atividade 1
Desenvolva um programa, utilizando a linguagem C, que receba 3 valores que correspondem às
 medidas dos lados de um triângulo (valores maiores que zero). Imprima na tela se o triângulo
 é equilátero, isóceles ou escaleno.
---------------------------------------------------------------------------------------------
Detalhamento
	Entradas de dados:
	Número 1, número 2, número 3
	
	Saídas de dados:
	Erro 
	Triângulo equilátero
	Triângulo isóscele
	Triângulo escaleno
	
	Processamento
 	obter número 1, número 2, número 3
 	calcular lados opostos de uma arresta
 	Se arresta do triângulo maior que o calculo dos dois lados opostos ou n1, n2, n3 igual a zero, 
	 gerar erro e pedir números novamente
		Se não, prosseguir com o codigo
	Se número 1 igual número 2 igual número 3, escreva triângulo equilátero	
	Se número 1 igual número 2 diferente de número 3, escreva triângulo isóscele
	 ou número 1 diferente de número 2 igual número 3, escreva triângulo isóscele
	 ou número 1 igual número 3 diferente de número 2, escreva triângulo isóscele
	Se número 1 diferente de número 2 diferente de número 3  
	 e número 1 diferente de número 3, escreva triângulo escaleno
*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2, n3, soma1, soma2, soma3;
	
	do{	   	
		printf("Para verificar o tipo do triângulo\n");
		printf("Digite tres numeros inteiros\n");
		scanf("%d%d%d",&n1,&n2,&n3);

		soma1 = n2 + n3;
		soma2 = n1 + n3;
		soma3 = n1 + n2;
	
		if ((n1 > soma1) || (n2 > soma2) || (n3 > soma3) || (n1 == 0) || (n2 == 0) || (n3 == 0))
			printf("\nErro, não é um triângulo.\n\n");
	} while ((n1 > soma1) || (n2 > soma2) || (n3 > soma3) || (n1 == 0) || (n2 == 0) || (n3 == 0));
			
	if ((n1 == n2) && (n1 == n3) && (n2 == n3))
		printf("\nTriângulo equilátero\n");
	if (((n1 == n2) && ((n1 != n3) && (n2 != n3))) || ((n1 == n3) && ((n1 != n2) && (n3 != n2)))
	 || ((n2 == n3) && ((n2 != n1) && (n3 != n1))))
		printf("\nTriângulo isóscele\n");
	if 	((n1 != n2) && (n1 != n3) && (n2 != n3))	
		printf("\nTriângulo escaleno\n");
	
	return 0;
}