#include <stdio.h>
#include <locale.h>

/*Para apresentar a soma dos n�meros inteiros pares existentes entre esses dois n�meros, 
utilize um programa em Linguagem C com a estrutura de repeti��o com teste no inicio (for) que receba do 
usu�rio dois n�meros inteiros positivos. Caso, o primeiro n�mero informado for  maior que o segundo, utilize a 
a ordem decrescente para o controle dos n�meros, caso contr�rio, utilize a ordem crescente.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num1, num2, soma = 0;
	
	printf("Algoritmo para somar n�meros pares.\n");
    printf("Digite o primeiro n�mero, inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero, inteiro: ");
    scanf("%d", &num2);
	
	if(num1 > num2) {
        for(i = num1; i >= num2; i--) {
            if (i % 2 == 0) {
                printf("%d ", i);
                soma = soma + i;
            }
        }
    } else if(num1 < num2) {
        for(i = num1; i <= num2; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
                soma = soma + i;
            }
        }
    } else {
        if (num1 % 2 == 0) {
            printf("Os n�meros s�o iguais!");
            soma = num1;
        }
    }
    
	printf("\nA soma dos n�meros pares entre %d e %d � %d!\n", num1, num2, soma);
	
    return 0;
}