#include <stdio.h>
#include <locale.h>

/*Escrever um algoritmo que l� um n�mero de 3 d�gitos e o inverta, escrevendo o n�mero lido e o invertido.*/


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, centenas, dezenas, unidades, invertido;
	
	printf("Digite um n�mero para invertelo: ");
	scanf("%d", &num);
	
	centenas = num / 100;  
    dezenas = (num / 10) % 10;
    unidades = num % 10;
    invertido = (unidades * 100) + (dezenas * 10) + centenas;
	
	printf("O n�mero que voc� digitou foi %d e este n�mero invertido fica %03d", num, invertido);
	
	return 0;
}