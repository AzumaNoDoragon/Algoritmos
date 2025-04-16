#include <stdio.h>
#include <locale.h>

/*Escrever um algoritmo que lê um valor em reais e calcule qual o menor número possível de notas de 100, 50, 10, 5 e 1 em que o 
valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias. */


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int dindin, n_100, n_50, n_10, n_5, n_1;
	
	printf("Digite o dinheiro que pussui: ");
	scanf("%d", &dindin);
	
	n_100 = dindin / 100;
    n_50 = (dindin % 100) / 50;
    n_10 = ((dindin % 100) % 50) / 10;
    n_5 = (((dindin % 100) % 50) % 10) / 5;
    n_1 = ((((dindin % 100) % 50) % 10) % 5) / 1;
    
    printf("\nVocê pode decompor este valor em %d notas de R$100, %d notas de R$50, %d notas de R$10, %d notas de R$5, %d notas de R$1\n", n_100, n_50, n_10, n_5, n_1);
	
	return 0;
}