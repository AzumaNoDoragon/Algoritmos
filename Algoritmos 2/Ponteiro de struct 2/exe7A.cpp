/*
7. Faça o mesmo programa do exercício 1 e 4, mas a leitura deve ser feita dentro 
de uma função chamada ler() e a apresentação dos dados deve ser feita em outra 
função chamada apresentar(). Não usar ponteiro, portanto, a função ler deve retornar 
a variável heterogênea.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dvd{
	char titulo[20], genero[20], prateleira[10]; 
	int duracao;
}typedef Dvd;

void apresentar(Dvd dvd);
Dvd ler();

int main(int argc, char** argv)
{
	Dvd dvd;
	
	dvd = ler();
	
	apresentar(dvd);
	
	return 0;
}

void apresentar(Dvd dvd){
	printf("Titulo: %s\nGenero: %s\nPrateleira %s\nDuracao: %d", dvd.titulo, dvd.genero, dvd.prateleira, dvd.duracao);
};

Dvd ler(){
	Dvd dvd;
	
	printf("<<< Vamos cadatrar o DVD >>>\n");
	printf("Digite o titulo: ");
	gets(dvd.titulo);
	printf("Digite o genero: ");
	gets(dvd.genero);
	printf("Digite a prateleira: ");
	gets(dvd.prateleira);
	printf("Digite a duracao: ");
	scanf("%d", &dvd.duracao);
	
	return dvd;
}