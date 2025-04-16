#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int count = 0;

struct pokemon{
	char nome[90];
	int vida, ataque, defesa; 
};

typedef struct pokemon pokemon;

int menu();
void create(pokemon pokemons[]);
void read(pokemon pokemons[]);
void load();
void cls();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc = -1;
	pokemon pokedex[5];
	
	while(opc != 0){
		opc = menu();
		switch(opc)
		{
		case 1:
			if(count < 5){
				create(pokedex);
			} else {
				cls();
				printf("Pokedex cheia! Não é possível cadastrar mais Pokémon.\n\n");
			}
			break;
		case 2:
			if(count == 0){
				cls();
				printf("Ainda não tem nenhum pokemon cadastrado na pokedex!\n\n");
			} else {
				read(pokedex);
			}
			break;
		default:
			if(opc != 0){
				cls();
				printf("Numero inexistente.\n\n");
			}
			break;
		}
	}
	
	cls();
	printf("Bye-Bye");
	 
	return 0;
}

int menu(){
	int opc;
	
	printf("Digite o que deseja fazer: \n");
	printf("1 - Cadastrar um pokemon no pokedex.\n");
	printf("2 - Apresentar pokemon.\n");
	printf("0 - Sair.\n");
	scanf("%d", &opc);
	
	return opc;
}

void create(pokemon pokemons[]){
	int opc;
	
	while(opc != 0 && count < 5){
		cls();
		printf("Vamos registrar o pokemon no pokedex: ");
		printf("\nDigite o nome: ");
		getchar();
		fgets(pokemons[count].nome, sizeof(pokemons[count].nome), stdin);
		pokemons[count].nome[strcspn(pokemons[count].nome, "\n")] = 0;
		printf("Digite a vida: ");
		scanf("%d", &pokemons[count].vida);
		printf("Digite o ataque: ");
		scanf("%d", &pokemons[count].ataque);
		printf("Digite a defesa: ");
		scanf("%d", &pokemons[count].defesa);
		
		count++;
		
		printf("\nDeseja cadastrar outro pokemon?(0 - Não, 1 - Sim)\n");
		scanf("%d", &opc);
		if(count == 5){
			cls();
			printf("Pokedex chegou ao limite.\nNão é possivel cadastrar mais nenhum pokemon!");
			Sleep(5000);
		}
	}
	cls();
}

void read(pokemon pokemons[]){
	int pock, opcRead = 1;
	load();
	
	while(opcRead == 1){
		cls();
		printf("Digite qual pokemon deseja saber os status?\n");
		scanf("%d", &pock);
		
		if(pock >= 0 && pock < count){
			printf("Pokemon: %s\nVida: %d\nAtaque: %d\nDefesa: %d\n", pokemons[pock].nome, pokemons[pock].vida, pokemons[pock].ataque, pokemons[pock].defesa);
		} else {
			cls();
			printf("Pokemon não cadastrado ou numero fora do limite da pokedex. Tente novamente!");
		}
		
		printf("\nDeseja ver o status de outro pokemon?(0 - Não, 1 - Sim) \n");
		scanf("%d", &opcRead);
	}
	cls();
}

void load() {
    int i, j;
    
    for(i = 0; i <= 10; i++){
		cls();
		printf("Carregando ");
		for(j = 0; j < i; j++){
			printf("-");
		}
		printf("O");
		for(j = i; j < 10; j++){
			printf("-");
		}
	}
	for(i = 9; i >= 0; i--){
		cls();
		printf("Carregando ");
		for(j = 0; j < i; j++){
			printf("-");
		}
		printf("O");
		for(j = i; j < 10; j++){
			printf("-");
		}
	}
    
    cls();
}

void cls(){
	Sleep(200);
	system("cls");
}