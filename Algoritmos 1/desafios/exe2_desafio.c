#include <stdio.h>

int main(){
	int n = 0, i;
	float total = 0;
	
	while(n < 10){
		printf("Digite o valor para ser calculado maior ou igual a 10: ");
	    scanf("%d", &n);
	}
	
	for(i = 1; i <= 10; i++){
		total = total + ((float)i / ((float)n - ((float)i - 1)));
	}
	
	printf("\n%f\n", total);
	
	return 0;
}