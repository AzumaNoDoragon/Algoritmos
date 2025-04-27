/*Dados três números inteiros, verifique se eles podem ser lados de um triângulo e, se puderem,
classifique o triângulo como equilátero, isóscele ou escaleno. Para ser lados de um triangulo cada lado
deve ser menor que a soma dos outros dois lados. Um triângulo equilátero possui os três lados iguais;
um triângulo isóscele possui apenas dois lados iguais e em um triângulo escaleno nenhum dos lados é
igual. */

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