/* 
Nome Gabriel Santos Afini da Silva
RA 2267284
Linguagem de programa��o-IF62B
---------------------------------------------------------------------------------------------
Atividade 1
Desenvolva um programa, utilizando a linguagem C, que receba 3 valores que correspondem �s
 medidas dos lados de um tri�ngulo (valores maiores que zero). Imprima na tela se o tri�ngulo
 � equil�tero, is�celes ou escaleno.
---------------------------------------------------------------------------------------------
Detalhamento
	Entradas de dados:
	N�mero 1, n�mero 2, n�mero 3
	
	Sa�das de dados:
	Erro 
	Tri�ngulo equil�tero
	Tri�ngulo is�scele
	Tri�ngulo escaleno
	
	Processamento
 	obter n�mero 1, n�mero 2, n�mero 3
 	calcular lados opostos de uma arresta
 	Se arresta do tri�ngulo maior que o calculo dos dois lados opostos ou n1, n2, n3 igual a zero, 
	 gerar erro e pedir n�meros novamente
		Se n�o, prosseguir com o codigo
	Se n�mero 1 igual n�mero 2 igual n�mero 3, escreva tri�ngulo equil�tero	
	Se n�mero 1 igual n�mero 2 diferente de n�mero 3, escreva tri�ngulo is�scele
	 ou n�mero 1 diferente de n�mero 2 igual n�mero 3, escreva tri�ngulo is�scele
	 ou n�mero 1 igual n�mero 3 diferente de n�mero 2, escreva tri�ngulo is�scele
	Se n�mero 1 diferente de n�mero 2 diferente de n�mero 3  
	 e n�mero 1 diferente de n�mero 3, escreva tri�ngulo escaleno
*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2, n3, soma1, soma2, soma3;
	
	do{	   	
		printf("Para verificar o tipo do tri�ngulo\n");
		printf("Digite tres numeros inteiros\n");
		scanf("%d%d%d",&n1,&n2,&n3);

		soma1 = n2 + n3;
		soma2 = n1 + n3;
		soma3 = n1 + n2;
	
		if ((n1 > soma1) || (n2 > soma2) || (n3 > soma3) || (n1 == 0) || (n2 == 0) || (n3 == 0))
			printf("\nErro, n�o � um tri�ngulo.\n\n");
	} while ((n1 > soma1) || (n2 > soma2) || (n3 > soma3) || (n1 == 0) || (n2 == 0) || (n3 == 0));
			
	if ((n1 == n2) && (n1 == n3) && (n2 == n3))
		printf("\nTri�ngulo equil�tero\n");
	if (((n1 == n2) && ((n1 != n3) && (n2 != n3))) || ((n1 == n3) && ((n1 != n2) && (n3 != n2)))
	 || ((n2 == n3) && ((n2 != n1) && (n3 != n1))))
		printf("\nTri�ngulo is�scele\n");
	if 	((n1 != n2) && (n1 != n3) && (n2 != n3))	
		printf("\nTri�ngulo escaleno\n");
	
	return 0;
}