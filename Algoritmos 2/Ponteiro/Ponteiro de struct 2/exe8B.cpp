/*
8. Modifique o exerc�cio 1 e 4, para que a fun��o ler() n�o retorne mais uma 
vari�vel. Em vez disso, a vari�vel da fun��o main deve ser passada por refer�ncia 
� fun��o ler(). E a fun��o ler manipular� a vari�vel por meio de um ponteiro.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pokemon{
	char nome[10];
	int vida, ataque, defesa;
}typedef Pokemon;

void apresentar(Pokemon *p);
void ler(Pokemon *p);

int main(int argc, char** argv)
{
	Pokemon *p;
	p = (Pokemon*)malloc(sizeof(Pokemon));
	
	ler(p);
	apresentar(p);
	
	return 0;
}

void apresentar(Pokemon *p){
	printf("\nAtributos do pokemon\nNome: %s\nVida: %d\nAtaque: %d\nDefesa: %d\n", p->nome, p->vida, p->ataque, p->defesa);
}

void ler(Pokemon *p){
	printf("<<<Vamos cadastrar seu pokemon>>>\n");
	printf("Digite o nome: ");
	gets(p->nome);
	printf("Digite a vida: ");
	scanf("%d", &p->vida);
	printf("Digite o ataque: ");
	scanf("%d", &p->ataque);
	printf("Digite a defesa: ");
	scanf("%d", &p->defesa);
}