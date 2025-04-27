/*Ler um número inteiro representando a quantidade de alunos de uma turma e informe a
quantidade de grupos de 4 alunos que podem ser formados, e quantos alunos ficam de fora, sem formar
um grupo completo*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int a, g, f;
	
	printf("Digite quantos alunos a sala possui: ");
	scanf("%d",&a);
	g = a / 4;
	f = a % 4; 
	printf("A quantidade de grupos será %d e a quantidade de alunos sem grupo será %d",g,f);
		
	return 0;
}