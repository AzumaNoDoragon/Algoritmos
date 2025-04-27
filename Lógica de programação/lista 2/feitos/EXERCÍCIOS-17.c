/*Escreva um programa que imprime na tela a situa��o do aluno ap�s a sua nota ser digitada. Baseie-se
na tabela abaixo:
a) Nota: de 1 a 2 � Situa��o: nota p�ssima
b) Nota: de 3 a 4 � Situa��o: nota ruim
c) Nota: de 5 a 6 � Situa��o: nota razo�vel
d) Nota: 7 � Situa��o: nota boa
e) Nota: de 8 a 9 � Situa��o: nota muito boa
f) Nota: 10 � Situa��o: nota �tima*/

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
			printf("\nSitua��o: nota p�ssima\n");
			break;
		case 3 ... 4:
			printf("\nSitua��o: nota ruim\n");
			break;
		case 5 ... 6:
			printf("\nSitua��o: nota razo�vel\n");
			break;
		case 7:
			printf("\nSitua��o: nota boa\n");
			break;
		case 8 ... 9:
			printf("\nSitua��o: nota muito boa\n");
			break;
		case 10:
			printf("\nSitua��o: nota �tima\n");
			break;
	default:
		printf("\nFora dos par�metros\n");
		break;
	}
	
	
	return 0;
}