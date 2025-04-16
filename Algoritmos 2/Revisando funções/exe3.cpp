#include <stdio.h>
#include <stdint.h>
#include <math.h>

int valor();
int quadrado(int v);
void apresenta(int v, int quad);

int main(){
	int v, quad;
	
	v = valor();
	quad = quadrado(v);
	apresenta(v, quad);
	
	return 0;
}

int valor(){
	int v;
	
	printf("Digite um valor para ser elevado ao quadrado: ");
	scanf("%d", &v);
	
	return v;
}

int quadrado(int v){
	return pow(v, 2);
}

void apresenta(int v, int quad){
	printf("\nO valor %d elevado ao quadrado e %d\n", v, quad);
}