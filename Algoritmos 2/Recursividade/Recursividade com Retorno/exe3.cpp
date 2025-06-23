/*
3-Fa�a um programa que pe�a 4 valores e calcule a soma de todos os valores.
Por fim, fa�a o c�lculo da m�dia.
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
		printf("Digite o %d� valor: ", count + 1);
		scanf("%f", &a);
		return a + read(count + 1);
	}
	return a;
}