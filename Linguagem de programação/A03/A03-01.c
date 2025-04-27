/*Gabriel Santos Afini da Silva
RA 2267284

A03-01
Crie e inicialize uma string com a frase "bom dia" . O programa deve contar quantas vogais aparecem na frase.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int i, count = 0;
	char frase[8];
		strcpy(frase, "Bom dia.");
	
	printf("%s\n", frase);
	
	for(i=0;i<strlen(frase);i++){
	if((frase[i]=='a')||(frase[i]=='e')||(frase[i]=='i')||(frase[i]=='o')||
		(frase[i]=='u')){
			count++;
		}
	}	
	
	printf("\nO número de vogais é: %d\n", count);
		
	return(0);
}