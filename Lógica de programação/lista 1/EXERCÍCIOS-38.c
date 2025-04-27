/*Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu
rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses.
Sabendo-se que a fórmula usada para este cálculo é: valor acumulado = (p * (1 + i)n) / i, onde i = taxa, p =
aplicação mensal, n = número de meses.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	float p, i, va, r;
	
	printf("digite a aplicação mensal: ");
	scanf("%f",&p);
	printf("Digite o valor da taxa: ");
	scanf("%f",&i);	
	printf("Digite a quantidade de meses: ");
	scanf("%d",&n);
	va = (p * (1 + i) * n) / i;
	r = va - (n * p);
	printf("\nO o valor acumulado será de %.2f e o rendimento será de %.2f\n",va,r);
		
	return 0;
}