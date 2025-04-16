#include <stdio.h>
#include <locale.h>

/*
Preencher um vetor com os números pares do número 2 a 20.
*/

int main(){
	int i, var[10];
	
	for(i = 0; i < 10; i++){
		var[i] = (i + 1) * 2;
	}

	printf("Os numeros pares de 2 a 20 sao:\n");
    for(i = 0; i < 10; i++){
        printf("%d ", var[i]);
    }
    
    printf("\n");
	
	return 0;
}