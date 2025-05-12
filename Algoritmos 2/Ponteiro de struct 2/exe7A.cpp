/*
7. Fa�a o mesmo programa do exerc�cio 1 e 4, mas a leitura deve ser feita dentro 
de uma fun��o chamada ler() e a apresenta��o dos dados deve ser feita em outra 
fun��o chamada apresentar(). N�o usar ponteiro, portanto, a fun��o ler deve retornar 
a vari�vel heterog�nea.
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