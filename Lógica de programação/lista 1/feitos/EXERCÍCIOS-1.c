//Obter o nome e a idade de um usu�rio e escrever na tela a seguinte mensagem: Hello! FULANO, voc� tem XX anos!

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
	printf("\nHello! %s, voc� tem %d anos!\n", nome, idade);
	
	return 0;
}