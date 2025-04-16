#include <stdio.h>
#include <locale.h>

/*Para apresentar a soma dos números inteiros pares existentes entre esses dois números, 
utilize um programa em Linguagem C com a estrutura de repetição com teste no inicio (for) que receba do 
usuário dois números inteiros positivos. Caso, o primeiro número informado for  maior que o segundo, utilize a 
a ordem decrescente para o controle dos números, caso contrário, utilize a ordem crescente.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num1, num2, soma = 0;
	
	printf("Algoritmo para somar números pares.\n");
    printf("Digite o primeiro número, inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número, inteiro: ");
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
            printf("Os números são iguais!");
            soma = num1;
        }
    }
    
	printf("\nA soma dos números pares entre %d e %d é %d!\n", num1, num2, soma);
	
    return 0;
}