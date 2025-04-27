/* Ler uma temperatura em graus Centígrados e apresente-a convertida
em graus Fahrenheit. A fórmula é: F = (9 * C + 160)/5 */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, soma;
	
	printf("Digite a temperatura em graus Centígrados para fazer a conversão: ");
	scanf("%f",&n1);
	soma = (9 * n1 + 160) / 5;
	printf("\nA conversão é %.2f graus Fahrenheit\n",soma);
		
	return 0;
}