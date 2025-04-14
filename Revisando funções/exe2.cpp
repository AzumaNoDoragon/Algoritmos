#include <stdio.h>
#include <stdint.h>

float fahr();
float celsius(float f);
void apresenta(float f, float c);

int main(){
	float f, c;
	
	f = fahr();
	c = celsius(f);
	apresenta(f, c);
	
	return 0;
}

float fahr(){
	float f;
	
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &f);
	
	return f;
}

float celsius(float f){
	return 5 * (f - 32) / 9;
}

void apresenta(float f, float c){
	printf("\nA temperatura %0.1fF convertida fica %0.1fC.\n", f, c);
}