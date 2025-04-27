/* 
Nome Gabriel Santos Afini da Silva
RA 2267284
---------------------------------------------------------------------------------------------
Quest�o 03
Dados tr�s n�meros inteiros distintos, exiba-os em ordem crescente
---------------------------------------------------------------------------------------------
Detalhamento
	Entradas de dados:
	N�mero 1, n�mero 2, n�mero 3
	
	Sa�das de dados: 
	n�mero 1, n�mero 2, n�mero 3 em ordem crescente
	
	Processamento
	Obter n�mero 1, n�mero 2, n�mero 3
	Se n�mero 1 igual a n�mero 2 igual n�mero 3 e n�mero 1 igual a n�mero 3
	 gerar erro e pedir novamente os n�meros
		Se n�o, prosseguir com o c�digo
	Primeiro n�mero
		Se n�mero 1 menor que n�mero 2 e n�mero 1 menor que n�mero 3, escreva n�mero 1
		Se n�mero 2 menor que n�mero 1 e n�mero 2 menor que n�mero 3, escreva n�mero 2
		Se n�mero 3 menor que n�mero 1 e n�mero 3 menor que n�mero 1, escreva n�mero 3
	Segundo n�mero
		Se n�mero 1 maior que n�mero 2 e n�mero 1 menor que n�mero 3, escreva n�mero 1
		Se n�mero 1 menor que n�mero 2 e n�mero 1 maior que n�mero 3, escreva n�mero 1
		Se n�mero 2 maior que n�mero 1 e n�mero 2 menor que n�mero 3, escreva n�mero 2
		Se n�mero 2 menor que n�mero 1 e n�mero 2 maior que n�mero 3, escreva n�mero 2
		Se n�mero 3 maior que n�mero 1 e n�mero 3 menor que n�mero 2, escreva n�mero 3
		Se n�mero 3 menor que n�mero 1 e n�mero 3 maior que n�mero 2, escreva n�mero 3
	Terceiro n�mero
		Se n�mero 1 maior que n�mero 2 e n�mero 1 maior que n�mero 3, escreva n�mero 1
		Se n�mero 2 maior que n�mero 1 e n�mero 2 maior que n�mero 3, escreva n�mero 2
		Se n�mero 3 maior que n�mero 1 e n�mero 3 maior que n�mero 2, escreva n�mero 3
*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2, n3;
	
	do{
		printf("Digite 3 n�meros distintos para colocalos em ordem crescente\n");
		printf("Digite-os separados por enter\n");
		scanf("%d%d%d",&n1,&n2,&n3);
		
		if ((n1 == n2) || (n1 == n3) || (n2 == n3))
			printf("\nErro, digite 3 n�meros distintos.\n\n");
	} while ((n1 == n2) || (n1 == n3) || (n2 == n3));
	
	printf("\nOs n�meros em ordem crescente s�o ");
	if ((n1 < n2) && (n1 < n3))
		printf("%d",n1);
	if ((n2 < n1) && (n2 < n3))
		printf("%d",n2);
	if ((n3 < n1) && (n3 < n2))
		printf("%d",n3);

	printf(", ");
	if ((n1 > n2) && (n1 < n3))
		printf("%d",n1);
	if ((n1 < n2) && (n1 > n3))
		printf("%d",n1);
	if ((n2 > n1) && (n2 < n3))
		printf("%d",n2);
	if ((n2 < n1) && (n2 > n3))
		printf("%d",n2);
	if ((n3 > n1) && (n3 < n2))
		printf("%d",n3);
	if ((n3 < n1) && (n3 > n2))
		printf("%d",n3);

	printf(" e ");	
	if ((n1 > n2) && (n1 > n3))
		printf("%d\n",n1);
	if ((n2 > n1) && (n2 > n3))
		printf("%d\n",n2);
	if ((n3 > n1) && (n3 > n2))
		printf("%d\n",n3);
	
	return 0;
}