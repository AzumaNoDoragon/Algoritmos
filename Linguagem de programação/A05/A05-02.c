/*Gabriel Santos Afini da Silva
RA 2267284

A05-02
Fa�a um programa que verifique se um numero inteiro digitado pelo usu�rio � par ou impar.
- O valor digitado deve ser lido na fun��o main( )
- deve ser declarada uma fun��o do tipo "bool", que recebe um par�metro do tipo inteiro 
e verifica se o numero � par ou impar
- inclua a biblioteca <stdbool.h> para utilizar o tipo booleano
- a fun��o deve retornar verdadeiro "true" se o numero digitado for par ou retornar "false"
se o n�mero digitado for impar
- na fun��o main( ), caso o valor de retorno seja "true", imprima na tela uma mensagem dizendo
que o numero � par e caso o valor de retorno seja "false", imprima na tela uma mensagem 
dizendo que o numero � impar*/

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
		
	printf("Digite um valor para saber se � par ou �mpar\n");
	scanf("%d",&num);
		
	i = verifica(num);
	if(i == true){	
	   	printf("\nO valor %d � par\n", num);
	}else if(i == false){
		printf("\nO valor %d � �mpar\n", num);
	}
		
	return 0;
}