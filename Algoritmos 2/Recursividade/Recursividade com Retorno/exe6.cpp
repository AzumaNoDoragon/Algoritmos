/*
6-Faça um algoritmo que peça 5 valores. E crie uma função recursiva que calcule 
quantos valores entre 3 e 8 foram digitados. Então, se foram digitados os valores 
1, 3, 4, 7, 10, a função recursiva deve retornar o número 3, porque há 3 números 
entre 3 e 8. Faça o desenho da execução.
*/
#include <stdio.h>

int contar(int count);

int main(int argc, char** argv){
	int qtd;

	qtd = contar(0);

	printf("Foram digitados %d números entre 3 e 8.\n", qtd);

	return 0;
}

int contar(int count){
	int valor, entre = 0;

	printf("Digite o %dº valor: ", count + 1);
	scanf("%d", &valor);

	if (valor >= 3 && valor <= 8){
		entre = 1;
	}

	if (count < 4){
		return entre + contar(count + 1);
	}

	return entre;
}

