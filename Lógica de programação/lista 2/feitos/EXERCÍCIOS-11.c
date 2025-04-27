/*Escreva um programa que leia 3 valores A, B e C e verifique se esses valores representam os lados de
um tri�ngulo. Para que seja um tri�ngulo, todos os lados devem ser maiores que zero e nenhum lado
deve ser igual ou maior que a soma dos outros dois lados. Se A, B e C representam os lados de um
tri�ngulo, ent�o calcule e imprima sua �rea:
�rea = (S*(S-a)*(S-b)*(S-c))2 onde S = (a+b+c)/2
Informe tamb�m o tipo do tri�ngulo:
Escaleno: todos os lados diferentes.
Is�sceles: 2 lados iguais.
Eq�il�tero: todos os lados iguais.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2, n3, soma1, soma2, soma3, s, area;
	
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
			
	s = (n1 + n2 + n3) / 2;
	area = (s * (s - n1) * (s - n2) * (s - n3));
					
	printf("\nA �rea � %d e ele � um ",area);		
	if ((n1 == n2) && (n1 == n3) && (n2 == n3))
		printf("tri�ngulo equil�tero\n");
	if (((n1 == n2) && ((n1 != n3) && (n2 != n3))) || ((n1 == n3) && ((n1 != n2) && (n3 != n2)))
	 || ((n2 == n3) && ((n2 != n1) && (n3 != n1))))
		printf("tri�ngulo is�scele\n");
	if 	((n1 != n2) && (n1 != n3) && (n2 != n3))	
		printf("tri�ngulo escaleno\n");
	
	return 0;
}