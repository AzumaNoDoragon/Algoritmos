/*
6. Idem, mas sem criar a variável (faça por alocação dinâmica).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pokemon{
	char nome[10];
	int vida, ataque, defesa;
};

int main(int argc, char** argv)
{
	Pokemon *p;
	p = (Pokemon*)malloc(sizeof(Pokemon));
	
	printf("<<<Vamos cadastrar seu pokemon>>>\n");
	printf("Digite o nome: ");
	gets(p->nome);
	printf("Digite a vida: ");
	scanf("%d", &p->vida);
	printf("Digite o ataque: ");
	scanf("%d", &p->ataque);
	printf("Digite a defesa: ");
	scanf("%d", &p->defesa);
	
	printf("\nAtributos do pokemon\nNome: %s\nVida: %d\nAtaque: %d\nDefesa: %d\n", p->nome, p->vida, p->ataque, p->defesa);
	
	return 0;
}