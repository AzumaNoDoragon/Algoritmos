#include <stdio.h>
#include <locale.h>

/*O sistema de avaliação da disciplina programação de computadores segue os seguintes critérios:
 • quatro avaliações durante o semestre;
 • 1ª avaliação tem peso 2;
 • 2ª avaliação tem peso 4;
 • 3ª avaliação tem peso 6;
 • 4ª avaliação tem peso 8;
 Fazer um algoritmo que leia a quatro notas de um aluno, calcule e escreva a média ponderada final do aluno.
 Ponderada*/


int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, pon;
	
	printf("Digite as notas do aluno para uma média ponderada: ");
	printf("\nNota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	printf("Nota 3: ");
	scanf("%f", &n3);
	printf("Nota 4: ");
	scanf("%f", &n4);
	
	pon = ((n1 * 2) + (n2 * 4) + (n3 * 6) + (n4 * 8)) / (2 + 4 + 6 + 8);
	
	printf("\nA média ponderada deste aluno é %0.2f!\n ", pon);
	
	return 0;
}