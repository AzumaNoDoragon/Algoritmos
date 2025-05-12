/*
8. Modifique o exercício 1 e 4, para que a função ler() não retorne mais uma 
variável. Em vez disso, a variável da função main deve ser passada por referência 
à função ler(). E a função ler manipulará a variável por meio de um ponteiro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dvd{
	char titulo[20], genero[20], prateleira[10]; 
	int duracao;
}typedef Dvd;

void apresentar(Dvd *p);
void ler(Dvd *p);

int main(int argc, char** argv)
{
	Dvd *p;
	p = (Dvd*)malloc(sizeof(Dvd));
	
	ler(p);
	
	apresentar(p);
	
	return 0;
}

void apresentar(Dvd *p){
	printf("Titulo: %s\nGenero: %s\nPrateleira %s\nDuracao: %d", p->titulo, p->genero, p->prateleira, p->duracao);
};

void ler(Dvd *p){
	
	printf("<<< Vamos cadatrar o DVD >>>\n");
	printf("Digite o titulo: ");
	gets(p->titulo);
	printf("Digite o genero: ");
	gets(p->genero);
	printf("Digite a prateleira: ");
	gets(p->prateleira);
	printf("Digite a duracao: ");
	scanf("%d", &p->duracao);
}