/* Ler uma temperatura em graus Cent�grados e apresente-a convertida
em graus Fahrenheit. A f�rmula �: F = (9 * C + 160)/5 */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, soma;
	
	printf("Digite a temperatura em graus Cent�grados para fazer a convers�o: ");
	scanf("%f",&n1);
	soma = (9 * n1 + 160) / 5;
	printf("\nA convers�o � %.2f graus Fahrenheit\n",soma);
		
	return 0;
}