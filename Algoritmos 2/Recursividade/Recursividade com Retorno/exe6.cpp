/*
6-Fa�a um algoritmo que pe�a 5 valores. E crie uma fun��o recursiva que calcule 
quantos valores entre 3 e 8 foram digitados. Ent�o, se foram digitados os valores 
1, 3, 4, 7, 10, a fun��o recursiva deve retornar o n�mero 3, porque h� 3 n�meros 
entre 3 e 8. Fa�a o desenho da execu��o.
*/
#include <stdio.h>

int contar(int count);

int main(int argc, char** argv){
	int qtd;

	qtd = contar(0);

	printf("Foram digitados %d n�meros entre 3 e 8.\n", qtd);

	return 0;
}

int contar(int count){
	int valor, entre = 0;

	printf("Digite o %d� valor: ", count + 1);
	scanf("%d", &valor);

	if (valor >= 3 && valor <= 8){
		entre = 1;
	}

	if (count < 4){
		return entre + contar(count + 1);
	}

	return entre;
}

