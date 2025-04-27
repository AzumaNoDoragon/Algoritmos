/*Gabriel Santos Afini da Silva
RA 2267284

A08-01
Escreva um programa que contenha uma estrutura de 3 membros do tipo inteiro,
chamados hora, min e seg. Atribua os valores e faça com que o programa imprima
o horário 11 horas, 35 minutos e 50 segundos.*/

#include <stdio.h>

struct hora{
	int hora, minuto, segundo;
	
};

int main(){
		
	struct hora tempo;
		
	tempo.hora = 11;
	tempo.minuto = 35;
	tempo.segundo = 50;
	
	printf("\n%d:%d:%d\n", tempo.hora, tempo.minuto, tempo.segundo);
		
	return 0;
}