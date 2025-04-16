#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int a, b, aux;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("\nOs valores foram trocados, agora A = %d e B = %d!\n", a, b);
	
	return 0;	
}