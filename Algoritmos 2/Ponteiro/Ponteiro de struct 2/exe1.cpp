/*
1. Fa�a um programa (todo na fun��o main) que tenha um registro (struct) que 
represente um DVD em uma locadora. Ent�o, deve ser armazenado o t�tulo, g�nero, 
dura��o e prateleira.  O programa deve pedir os respectivos dados do DVD. Em 
seguida, deve apresent�-los.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dvd{
	char titulo[20], genero[20], prateleira[10]; 
	int duracao;
};

int main(int argc, char** argv)
{
	dvd dvd;
	
	printf("<<< Vamos cadatrar o DVD >>>\n");
	printf("Digite o titulo: ");
	gets(dvd.titulo);
	printf("Digite o genero: ");
	gets(dvd.genero);
	printf("Digite a prateleira: ");
	gets(dvd.prateleira);
	printf("Digite a duracao: ");
	scanf("%d", &dvd.duracao);
	
	printf("Titulo: %s\nGenero: %s\nPrateleira %s\nDuracao: %d", dvd.titulo, dvd.genero, dvd.prateleira, dvd.duracao);
	
	return 0;
}