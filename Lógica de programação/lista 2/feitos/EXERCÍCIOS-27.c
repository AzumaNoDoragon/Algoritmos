/*Dados tr�s n�meros inteiros, verifique se eles podem ser lados de um tri�ngulo e, se puderem,
classifique o tri�ngulo como equil�tero, is�scele ou escaleno. Para ser lados de um triangulo cada lado
deve ser menor que a soma dos outros dois lados. Um tri�ngulo equil�tero possui os tr�s lados iguais;
um tri�ngulo is�scele possui apenas dois lados iguais e em um tri�ngulo escaleno nenhum dos lados �
igual. */

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