/*
3-Faça um programa que peça 4 valores e calcule a soma de todos os valores.
Por fim, faça o cálculo da média.
*/
#include <stdio.h>

float read(int count);

int main(int argc, char** argv){
	float media;
	
	media = read(0) / 4;
	
	printf("A media e %0.2f", media);
	
	return 0;
}

float read(int count){
	float a;
	
	if (count < 4){
		printf("Digite o %dº valor: ", count + 1);
		scanf("%f", &a);
		return a + read(count + 1);
	}
	return a;
}