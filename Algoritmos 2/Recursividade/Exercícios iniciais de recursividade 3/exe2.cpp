#include <stdio.h>

void contador(int a);

int main(int argc, char** argv){
	int a;

	printf("\nDigite um numero: ");
	scanf("%d", &a);
	
	contador(a);
	
	return 0;
}

void contador(int a){
	if(a < 8){
		if(a % 2 == 0){
			printf("\n%d = par", a);
		} else {
			printf("\n%d = impar",a);
		}
		
		contador(a+1);
	}
}