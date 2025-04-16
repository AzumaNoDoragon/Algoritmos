#include <stdint.h>
#include <stdio.h>

int anos();
int dias(int anos);
void apresentar(int anos, int dias);

int main(){
	int idade, quantDias;
	
	idade = anos();
	quantDias = dias(idade);
	apresentar(idade, quantDias);
	
	return 0;
}

int anos(){
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	return idade;
}

int dias(int anos){
	return anos * 365;
}

void apresentar(int anos, int dias){
	printf("\nCom a idade de %d, voce ja viveu, aproximadamente, %d dias. \n", anos, dias);
}