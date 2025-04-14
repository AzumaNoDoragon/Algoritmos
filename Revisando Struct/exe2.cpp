/*
Faça um algoritmo que tenha um registro (estrutura) que represente 
um DVD em uma locadora (procure o que é isso nos livros de História!). 
Então, deve ser armazenado o título, gênero, duração e prateleira. O 
programa deve pedir os respectivos dados do DVD. Em seguida, deve 
apresentá-los.
*/

#include <stdio.h>

struct dvd{
	char titulo[20], genero[20], prateleira[5];
	int duracao
	
	void setTitulo(){
		printf("Digite o titulo: ");
		fflush(stdin);
		gets(titulo);
	}
	
	void setGenero(){
		printf("Digite o genero: ");
		fflush(stdin);
		gets(genero);
	}
	
	void setDuracao(){
		printf("Digite a duracao: ");
		fflush(stdin);
		gets(duracao);
	}
	
	void setPrateleira(){
		printf("Digite a prateleira: ");
		fflush(stdin);
		gets(prateleira);
	}
	
	void apresentar(){
		printf("\nO nome do filme e %s, o genero e %s, a duracao e %s e se encontra na prateleira %s", titulo, genero, duracao, prateleira);
	}
};

int main(int argc, char** argv)
{
	dvd locacao;
	
	locacao.setTitulo();
	locacao.setGenero();
	locacao.setDuracao();
	locacao.setPrateleira();
	locacao.apresentar();
	
	return 0;
}