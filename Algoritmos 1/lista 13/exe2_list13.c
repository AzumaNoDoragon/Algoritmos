#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, maiorNum = 0;
	
	while(num > 0){
		printf("Digite um n�mero positivo: ");
		scanf("%d", &num);
		
		if(num > maiorNum){
			maiorNum = num;
		}
	}
	
	printf("\nO maior n�mero digitado foi %d!\n", maiorNum);
	
	return 0;
}