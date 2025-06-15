#include <stdio.h>
#include <stdlib.h>

void verifica(int i);

int main(int argc, char** argv)
{
	int x;

	printf("\nJogo da adivinhacao!");
	printf("\nJogador 1, escolha um numero:");
	scanf("%d", &x);
	
	system("cls");
	
	verifica(x);
	
	return 0;
}

void verifica(int x){
	int y;
	
	printf("\nJogador 2, digite um numero:");
	scanf("%d",&y);
	
	if(x != y){
		verifica(x);
	} else{
		printf("\nParabens!!! Voce adivinhou o numero digitado pelo jogador 1!!!\n");
	}
}