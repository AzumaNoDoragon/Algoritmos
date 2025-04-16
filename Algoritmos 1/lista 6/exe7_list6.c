#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a o nome de um usu�rio. Em seguida, o 
algoritmo deve pedir o g�nero do usu�rio (�f� para feminino e �m� para 
masculino). Se o usu�rio for do sexo feminino, apresentar a mensagem 
�Ol�, senhora <nome>�. Do contr�rio, apresentar a mensagem �Ol�, senhor 
<nome>�. Observa��o: fa�a de conta que o usu�rio sempre digitar� �f� ou 
�m�. 
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	char user[10], gen;
	
	printf("Digite seu usu�rio: ");
	scanf("%s", &user);
	printf("Digite seu g�nero (f para feminino, m para masculino): ");
    scanf(" %c", &gen);

    // Verifica e imprime a mensagem apropriada
    if (gen == 'f') {
        printf("Ol�, senhora %s!\n", user);
    } else if (gen == 'm') {
        printf("Ol�, senhor %s!\n", user);
    } else {
        printf("G�nero n�o reconhecido.\n");
    }
	
	return 0;
}