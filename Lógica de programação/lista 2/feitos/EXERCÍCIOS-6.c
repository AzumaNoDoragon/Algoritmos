/*Para 2 n�meros quaisquer, informar:
a) o maior
b) o menor
c) se s�o iguais */

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2;
	
	printf("Digite dois numeros para fazer compara��es(seguidos de enter)\n");
	scanf("%f%f",&n1,&n2);

	if(n1 > n2){
		printf("\nO %.2f � maior que %.2f\n\n",n1,n2);
		}
	if(n1 < n2){
		printf("\nO %.2f � maior que %.2f\n\n",n2,n1);
		}
	if(n1 == n2){
		printf("\nOs n�meros s�o iguais\n\n");
		}
		
	return 0;
}