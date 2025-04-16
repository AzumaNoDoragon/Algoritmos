#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	unsigned long long totalGraos = 0;
    unsigned long long graosCasa = 1;
	
	for(i = 1; i <= 64; i++) {
        totalGraos += graosCasa;
        graosCasa *= 2;
    }
	
	printf("O total de grãos que o monge esperava receber é: %llu\n", totalGraos);
	
	return 0;
}