/*Dados três números inteiros distintos, exiba-os em ordem crescente*/

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