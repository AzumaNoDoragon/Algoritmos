/*Obter dois números quaisquer, e informar:
a) a soma destes números;
b) a subtração destes números;
c) a multiplicação destes números; */

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
	printf("\nA soma é %.2f",soma);
	sub = n1 - n2;
	printf("\nA subtração é %.2f",sub);
	mult = n1 * n2;
	printf("\nA multiplicação é %.2f\n",mult);
		
	return 0;
}