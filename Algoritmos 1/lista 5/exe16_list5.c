#include <stdio.h>
#include <locale.h>

/*Ler dois n�meros inteiros quaisquer para as vari�veis A e B. Efetuar a troca dos valores de forma que A passe a armazenar o valor 
de B e que B passe armazenar o valor de A. Imprimir os valores trocados.*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, aux;
	
	printf("Digite os valores para serem trocados: ");
	printf("\nA: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("\nAgora o valor de A � %d e o valor de B � %d!\n ", a, b);
	
	return 0;
}