#include <stdio.h>
#include <locale.h>

/*O cora��o humano bate em m�dia uma vez por segundo. Desenvolva um algoritmo para calcular e escrever quantas vezes o 
cora��o de uma pessoa bater� se viver X anos. Dado de entrada: idade da pessoa (inteiro em anos). Considera��es: 1 ano = 365,25 
dias,  1 dia  =  24 horas, 1 hora =  60 minutos e 1 minuto =  60 segundos.*/


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	float bats;
	
	printf("Quantos anos voc� tem: ");
	scanf("%d", &idade);
	
	bats = idade * 365.25 * 24 * 60 * 60;
	
	printf("Com a sua idade, seu cora��o bateu em m�dia %0.0f vezes!", bats);
	
	return 0;
}