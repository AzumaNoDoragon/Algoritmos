/*
4. Faça um programa que: Tenha uma estrutura para Pokemon com: nome (vetor de 
char de 10 characteres), vida, Ataque, Defesa; O programa deve: Pedir para que
o usuário digite os valores do nome, vida, ataque e defesa. Apresente na tela.
Tudo deve ser feito na função main.
*/

#include <stdio.h>
#include <string.h>

struct Pokemon{
	char nome[10];
	int vida, ataque, defesa;
};

int main(int argc, char** argv)
{
	Pokemon pokemon;
	
	printf("<<<Vamos cadastrar seu pokemon>>>\n");
	printf("Digite o nome: ");
	gets(pokemon.nome);
	printf("Digite a vida: ");
	scanf("%d", &pokemon.vida);
	printf("Digite o ataque: ");
	scanf("%d", &pokemon.ataque);
	printf("Digite a defesa: ");
	scanf("%d", &pokemon.defesa);
	
	printf("\nAtributos do pokemon\nNome: %s\nVida: %d\nAtaque: %d\nDefesa: %d\n", pokemon.nome, pokemon.vida, pokemon.ataque, pokemon.defesa);
	
	return 0;
}