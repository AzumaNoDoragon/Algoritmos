/*
7. Faça o mesmo programa do exercício 1 e 4, mas a leitura deve ser feita dentro 
de uma função chamada ler() e a apresentação dos dados deve ser feita em outra 
função chamada apresentar(). Não usar ponteiro, portanto, a função ler deve retornar 
a variável heterogênea.
*/

#include <stdio.h>
#include <string.h>

struct Pokemon{
	char nome[10];
	int vida, ataque, defesa;
}typedef Pokemon;

void apresentar(Pokemon dvd);
Pokemon ler();

int main(int argc, char** argv)
{
	Pokemon pokemon;
	
	pokemon = ler();
	
	apresentar(pokemon);
	
	return 0;
}

void apresentar(Pokemon pokemon){
	printf("\nAtributos do pokemon\nNome: %s\nVida: %d\nAtaque: %d\nDefesa: %d\n", pokemon.nome, pokemon.vida, pokemon.ataque, pokemon.defesa);
}

Pokemon ler(){
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
	
	return pokemon;
}