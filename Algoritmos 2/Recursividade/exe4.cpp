#include <stdio.h>

void contar(int i);

int main(int argc, char** argv){
	int i;
	printf("Digite um valor menor que 5: ");
	scanf("%d", &i);
	contar(i);
	return 0;
}

void contar(int i){
	if(i <= 5){
		printf("%d\n", i);
		contar(++i);
	}
}