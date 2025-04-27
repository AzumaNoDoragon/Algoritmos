/*Gabriel Santos Afini da Silva
RA 2267284

A05-02
Faça um programa que verifique se um numero inteiro digitado pelo usuário é par ou impar.
- O valor digitado deve ser lido na função main( )
- deve ser declarada uma função do tipo "bool", que recebe um parâmetro do tipo inteiro 
e verifica se o numero é par ou impar
- inclua a biblioteca <stdbool.h> para utilizar o tipo booleano
- a função deve retornar verdadeiro "true" se o numero digitado for par ou retornar "false"
se o número digitado for impar
- na função main( ), caso o valor de retorno seja "true", imprima na tela uma mensagem dizendo
que o numero é par e caso o valor de retorno seja "false", imprima na tela uma mensagem 
dizendo que o numero é impar*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

bool verifica(int p_num){
	bool resultado;
		
	if(p_num%2 == 0){
		resultado = true;
	}else{
		resultado = false;
	}
		
	return resultado;
}

int main(){
	setlocale(LC_ALL,"");
	int num;
	bool i;
		
	printf("Digite um valor para saber se é par ou ímpar\n");
	scanf("%d",&num);
		
	i = verifica(num);
	if(i == true){	
	   	printf("\nO valor %d é par\n", num);
	}else if(i == false){
		printf("\nO valor %d é ímpar\n", num);
	}
		
	return 0;
}