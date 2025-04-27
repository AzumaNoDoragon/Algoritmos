/*Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada. Para calcular seu
rendimento, ela dever� fornecer o valor constante da aplica��o mensal, a taxa e o n�mero de meses.
Sabendo-se que a f�rmula usada para este c�lculo �: valor acumulado = (p * (1 + i)n) / i, onde i = taxa, p =
aplica��o mensal, n = n�mero de meses.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	float p, i, va, r;
	
	printf("digite a aplica��o mensal: ");
	scanf("%f",&p);
	printf("Digite o valor da taxa: ");
	scanf("%f",&i);	
	printf("Digite a quantidade de meses: ");
	scanf("%d",&n);
	va = (p * (1 + i) * n) / i;
	r = va - (n * p);
	printf("\nO o valor acumulado ser� de %.2f e o rendimento ser� de %.2f\n",va,r);
		
	return 0;
}