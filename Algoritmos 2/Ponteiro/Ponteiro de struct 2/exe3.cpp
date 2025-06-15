/*
3. Idem, mas sem criar a variável (faça por alocação dinâmica).
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
	Dvd *p;
	p = (Dvd*)malloc(sizeof(Dvd));
	
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