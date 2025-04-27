/*Escreva um programa que imprime na tela a situação do aluno após a sua nota ser digitada. Baseie-se
na tabela abaixo:
a) Nota: de 1 a 2 – Situação: nota péssima
b) Nota: de 3 a 4 – Situação: nota ruim
c) Nota: de 5 a 6 – Situação: nota razoável
d) Nota: 7 – Situação: nota boa
e) Nota: de 8 a 9 – Situação: nota muito boa
f) Nota: 10 – Situação: nota ótima*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float n;
	int nota;
	
	printf("Digite a nota: ");
	scanf("%f",&n);
	
	nota = floor(n);
	
	switch(nota){
		case 1 ... 2:
			printf("\nSituação: nota péssima\n");
			break;
		case 3 ... 4:
			printf("\nSituação: nota ruim\n");
			break;
		case 5 ... 6:
			printf("\nSituação: nota razoável\n");
			break;
		case 7:
			printf("\nSituação: nota boa\n");
			break;
		case 8 ... 9:
			printf("\nSituação: nota muito boa\n");
			break;
		case 10:
			printf("\nSituação: nota ótima\n");
			break;
	default:
		printf("\nFora dos parêmetros\n");
		break;
	}
	
	
	return 0;
}