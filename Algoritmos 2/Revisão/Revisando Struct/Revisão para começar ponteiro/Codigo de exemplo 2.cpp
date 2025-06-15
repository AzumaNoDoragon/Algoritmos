#include <stdio.h>
#include <string.h>

struct Pokedex{
	char nome[20];
	int vida, ataque, defesa;
};

int main(int argc, char** argv){
	Pokedex pokemon;
	
	printf("Digite o nome do pokemon: ");
	gets(pokemon.nome);
	printf("Digite a vida do pokemon: ");
	scanf("%d", &pokemon.vida);
	printf("Digite a ataque do pokemon: ");
	scanf("%d", &pokemon.ataque);
	printf("Digite a defesa do pokemon: ");
	scanf("%d", &pokemon.defesa);
	
	printf("\n***Pokemon***\nNome: %s\nVida: %d\nAtaque: %d\nDefesa: %d", pokemon.nome, pokemon.vida, pokemon.ataque, pokemon.defesa);
	
	return 0;
}