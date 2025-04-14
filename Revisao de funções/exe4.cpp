#include <stdio.h>
#include <stdint.h>
#include <math.h>

float raio();
float area(float r);
void apresentar(float r, float a);

int main(){
	float r, a;
	
	r = raio();
	a = area(r);
	apresentar(r, a);
	
	return 0;
}

float raio(){
	float r;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &r);
	
	return r;
}

float area(float r){
	return M_PI * pow(r, 2);
}

void apresentar(float r, float a){
	printf("O circulo com %0.2f de raio, possui uma area de %0.2f", r, a);
}

