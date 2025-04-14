/*
Faça um algoritmo que tenha um registro (estrutura) que represente 
um aluno. O usuário deve digitar o RA, nome e endereço do aluno. Em 
seguida, o algoritmo deve apresentar os dados do aluno. 
*/

#include <stdio.h>

struct aluno{
	int RA;
	char nome[20], endereco[20];
	
	void setNome(){
		printf("Digite seu nome: ");
		fflush(stdin);
		gets(nome);
	}
	
	void setRa(){
		printf("Digite seu RA: ");
		scanf("%d", &RA);
	}
	
	void setEndereco(){
		printf("Digite seu endereco: ");
		fflush(stdin);
		gets(endereco);
	}
	
	void apresentar(){
		printf("\nO nome do aluno e %s, seu RA e %d e seu endereco e %s", nome, RA, endereco);
	}
};

int main(int argc, char** argv)
{
	aluno a;
	
	a.setNome();
	a.setRa();
	a.setEndereco();
	a.apresentar();
	
	return 0;
}