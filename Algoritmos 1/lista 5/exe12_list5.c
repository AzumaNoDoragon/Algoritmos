#include <stdio.h>
#include <locale.h>

/*Escrever um algoritmo que lê um número de 3 dígitos e o inverta, escrevendo o número lido e o invertido.*/


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, centenas, dezenas, unidades, invertido;
	
	printf("Digite um número para invertelo: ");
	scanf("%d", &num);
	
	centenas = num / 100;  
    dezenas = (num / 10) % 10;
    unidades = num % 10;
    invertido = (unidades * 100) + (dezenas * 10) + centenas;
	
	printf("O número que você digitou foi %d e este número invertido fica %03d", num, invertido);
	
	return 0;
}