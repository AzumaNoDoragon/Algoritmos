#include <stdio.h>

int ler();
int somar(int a1, int a2);
void apres(int r);

int main(){
	int a, b, r;
	
	a = ler();
	b = ler();
	
	r=somar(a, b);
	
	apres(r);
	
	return 0;	
}

int ler(){
	int x;
	
	printf("Informe um valor: ");
	scanf("%d", &x);
	
	return x;
}

int somar(int a1, int a2){
	return a1 + a2;
}

void apres(int r){
	printf("A soma e: %d", r);
}