#include <stdio.h>
#include <stdint.h>

int minutos();
int segundos(int min);
void apresentar(int min, int seg);

int main(){
	int min, seg;
	
	min = minutos();
	seg = segundos(min);
	apresentar(min, seg);
	
	return 0;
}

int minutos(){
	int min;
	
	printf("Digite o tempo em minutos para ser convertido: ");
	scanf("%d", &min);
	
	return min;
}

int segundos(int min){
	return min*60;
}

void apresentar(int min, int seg){
	printf("\n%d em minutos sao %d em segundos.\n", min, seg);
}