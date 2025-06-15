/*
	Crie um programa que receba uma temperatura em Celsius, fa�a a convers�o para 
	Farenheit e apresente o valor convertido. F= (9*C/5) + 32 
*/

#include <stdio.h>

void recebe(float *c);
void converte(float c, float *f);
void apresenta(float c, float f);

int main(int argc, char** argv)
{
	float c, f;
	
	recebe(&c);
	converte(c, &f);
	apresenta(c, f);
	
	return 0;
}

void recebe(float *c){
	printf("Digite a temperatura em celsius: ");
	scanf("%f", c);
}

void converte(float c, float *f){
	*f = (9 * c / 5) + 32;
}

void apresenta(float c, float f){
	printf("%0.2f�C convertido fica %0.2f�F", c, f);
}