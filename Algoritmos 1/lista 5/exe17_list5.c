#include <stdio.h>
#include <locale.h>

/*O sistema de avalia��o da disciplina programa��o de computadores segue os seguintes crit�rios:
 � quatro avalia��es durante o semestre;
 � 1� avalia��o tem peso 2;
 � 2� avalia��o tem peso 4;
 � 3� avalia��o tem peso 6;
 � 4� avalia��o tem peso 8;
 Fazer um algoritmo que leia a quatro notas de um aluno, calcule e escreva a m�dia ponderada final do aluno.
 Ponderada*/


int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, pon;
	
	printf("Digite as notas do aluno para uma m�dia ponderada: ");
	printf("\nNota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	printf("Nota 3: ");
	scanf("%f", &n3);
	printf("Nota 4: ");
	scanf("%f", &n4);
	
	pon = ((n1 * 2) + (n2 * 4) + (n3 * 6) + (n4 * 8)) / (2 + 4 + 6 + 8);
	
	printf("\nA m�dia ponderada deste aluno � %0.2f!\n ", pon);
	
	return 0;
}