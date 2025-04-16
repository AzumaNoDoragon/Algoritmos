/*
Faça um algoritmo que tenha um registro (estrutura) que represente 
um monstro de bolso. O usuário deve digitar o nome, vida, ataque e defesa 
do bichinho. Em seguida, os dados devem ser apresentados.
*/

#include <stdio.h>

struct monstro{
	char nome[20];
	int vida, ataque, defesa;
	
	void setNome(){
		printf("Digite o nome: ");
		fflush(stdin);
		gets(nome);
	}
	
	void setVida(){
		printf("Digite o vida: ");
		scanf("%d", &vida);
	}
	
	void setAtaque(){
		printf("Digite a ataque: ");
		scanf("%d", &ataque);
	}
	
	void setDefesa(){
		printf("Digite a defesa: ");
		scanf("%d", &defesa);
	}
	
	void apresentar(){
		printf("\nO nome do monstro e %s, sua vida e %d, ataque %d e defesa %d\n\n", nome, vida, ataque, defesa);
	}
};

int main(int argc, char** argv)
{
	monstro pok[5];
	
	pok.setNome();
	pok.setVida();
	pok.setAtaque();
	pok.setDefesa();
	pok.apresentar();
	
	return 0;
}