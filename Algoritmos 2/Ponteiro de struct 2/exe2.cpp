/*
2.Faça o mesmo que o anterior, mas use um ponteiro para apontar para o DVD e 
manipule os valores usando o ponteiro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dvd{
	char titulo[20], genero[20], prateleira[10]; 
	int duracao;
};

int main(int argc, char** argv)
{
	Dvd dvd;
	Dvd *p = &dvd;
	
	printf("<<< Vamos cadatrar o DVD >>>\n");
	printf("Digite o titulo: ");
	gets(p->titulo);
	printf("Digite o genero: ");
	gets(p->genero);
	printf("Digite a prateleira: ");
	gets(p->prateleira);
	printf("Digite a duracao: ");
	scanf("%d", &p->duracao);
	
	printf("Titulo: %s\nGenero: %s\nPrateleira %s\nDuracao: %d", p->titulo, p->genero, p->prateleira, p->duracao);
	
	return 0;
}