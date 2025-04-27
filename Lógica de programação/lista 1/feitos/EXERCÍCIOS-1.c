//Obter o nome e a idade de um usuário e escrever na tela a seguinte mensagem: Hello! FULANO, você tem XX anos!

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	char nome[50];
	int idade;

	printf("Digite seu nome: ");
	fflush(stdin);
	gets(nome);
	printf("Digite sua idade: ");
	scanf("%d",&idade);	
	printf("\nHello! %s, você tem %d anos!\n", nome, idade);
	
	return 0;
}