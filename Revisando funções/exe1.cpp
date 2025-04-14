#include <stdio.h>
#include <stdint.h>

float celsius();
float fahr(float c);
void apresenta(float c, float f);

int main(){
	float c, f;
	
	c = celsius();
	f = fahr(c);
	apresenta(c, f);
	
	return 0;
}

float celsius(){
	float c;
	printf("Digite a temperatura em celsius: ");
	scanf("%f", &c);
	
	return c;
}

float fahr(float c){
	return (9 * c / 5) + 32;
}

void apresenta(float c, float f){
	printf("\nO valor de %0.1fC convertido fica %0.1fF.\n", c, f);
}