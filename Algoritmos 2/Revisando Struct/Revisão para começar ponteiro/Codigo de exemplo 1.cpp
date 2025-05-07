#include <stdio.h>
#include <string.h>

struct Pokedex{
	char nome[20];
	int vida, ataque, defesa;
	
	void getNome(){
		printf("Digite o nome do pokemon: ");
		gets(nome);
	}
	
	void getVida(){
		printf("Digite a vida do pokemon: ");
		scanf("%d", &vida);
	}
	
	void getAtaque(){
		printf("Digite a ataque do pokemon: ");
		scanf("%d", &ataque);
	}
	
	void getDefesa(){
		printf("Digite a defesa do pokemon: ");
		scanf("%d", &defesa);
	}
	
	void apresentar(){
		printf("\n***Pokemon***\nNome: %s\nVida: %d\nAtaque: %d\nDefesa: %d", nome, vida, ataque, defesa);
	}
};

int main(int argc, char** argv){
	Pokedex pokemon;
	
	pokemon.getNome();
	pokemon.getVida();
	pokemon.getAtaque();
	pokemon.getDefesa();
	pokemon.apresentar();
	
	return 0;
}