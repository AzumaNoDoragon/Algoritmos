/*Obter dois n�meros quaisquer, e informar:
a) a soma destes n�meros;
b) a subtra��o destes n�meros;
c) a multiplica��o destes n�meros; */

#include <stdio.h>
#include <math.h>
#include <locale.h>

float main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2, soma, sub, mult;
		
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	soma = n1 + n2;
	printf("\nA soma � %.2f",soma);
	sub = n1 - n2;
	printf("\nA subtra��o � %.2f",sub);
	mult = n1 * n2;
	printf("\nA multiplica��o � %.2f\n",mult);
		
	return 0;
}