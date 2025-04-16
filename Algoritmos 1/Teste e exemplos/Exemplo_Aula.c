#include <stdio.h>

int main()
{
	int i, maior, idade, soma = 0;
	
	for(i = 1; i <= 5; i++) {
		printf("Informe a idade: ");
		scanf("%d", &idade);
		if(i == 1) {
			maior = idade;
		} else if(idade > maior) {
			maior = idade;
		}
		soma = soma + idade;
	}
	
	printf("\nMaior idade %d\n", maior);
	printf("\nSoma das idades %d\n", soma);
	printf("\nMedias das idades %0.2f\n", (float)soma/(i-1));
		
	return 0;
}

