/* 
Nome Gabriel Santos Afini da Silva
RA 2267284
---------------------------------------------------------------------------------------------
Questão 03
Dados três números inteiros distintos, exiba-os em ordem crescente
---------------------------------------------------------------------------------------------
Detalhamento
	Entradas de dados:
	Número 1, número 2, número 3
	
	Saídas de dados: 
	número 1, número 2, número 3 em ordem crescente
	
	Processamento
	Obter número 1, número 2, número 3
	Se número 1 igual a número 2 igual número 3 e número 1 igual a número 3
	 gerar erro e pedir novamente os números
		Se não, prosseguir com o código
	Primeiro número
		Se número 1 menor que número 2 e número 1 menor que número 3, escreva número 1
		Se número 2 menor que número 1 e número 2 menor que número 3, escreva número 2
		Se número 3 menor que número 1 e número 3 menor que número 1, escreva número 3
	Segundo número
		Se número 1 maior que número 2 e número 1 menor que número 3, escreva número 1
		Se número 1 menor que número 2 e número 1 maior que número 3, escreva número 1
		Se número 2 maior que número 1 e número 2 menor que número 3, escreva número 2
		Se número 2 menor que número 1 e número 2 maior que número 3, escreva número 2
		Se número 3 maior que número 1 e número 3 menor que número 2, escreva número 3
		Se número 3 menor que número 1 e número 3 maior que número 2, escreva número 3
	Terceiro número
		Se número 1 maior que número 2 e número 1 maior que número 3, escreva número 1
		Se número 2 maior que número 1 e número 2 maior que número 3, escreva número 2
		Se número 3 maior que número 1 e número 3 maior que número 2, escreva número 3
*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2, n3;
	
	do{
		printf("Digite 3 números distintos para colocalos em ordem crescente\n");
		printf("Digite-os separados por enter\n");
		scanf("%d%d%d",&n1,&n2,&n3);
		
		if ((n1 == n2) || (n1 == n3) || (n2 == n3))
			printf("\nErro, digite 3 números distintos.\n\n");
	} while ((n1 == n2) || (n1 == n3) || (n2 == n3));
	
	printf("\nOs números em ordem crescente são ");
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