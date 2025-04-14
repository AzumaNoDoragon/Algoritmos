/*

inteiro ler() 
	inteiro a 
	escreva(“Digite um valor:”) 
	leia(a) 
	retornar a 
fim

inteiro fat(inteiro val) 
	inteiro i, res 
	res <- 1 
	para(i <- 2; i <= val; i++)faça 
		res <- res * i 
	fimpara   
	retornar res 
fim

nada apresentar(inteiro res) 
	escreva(“Resultado:” , res) 
fim

início 
	inteiro val, res  
	val <- ler() 
	res <- fat(val) 
	apresentar(res) 
fim

RESPOSTA:
O algoritmo atribui um valor a "val" por meio do usuario, depois faz um laço de repetição, 
com a condição de que i, que é igual a 2, enquanto i for menor ou igual que val, ele multiplique a 
variavel res por i, sendo assim este algoritmo simula o calculo do fatorial de um numero.

           val = 2           |           val = 4           |             val = 6             |
 i = 2, res = 1 * 2, res = 2 | i = 2, res = 1 * 2, res = 2 | i = 2, res = 1 * 2, res = 2     |
                             | i = 3, res = 2 * 3, res = 6 | i = 3, res = 2 * 3, res = 6     |
                             | i = 4, res = 6 * 4, res = 24| i = 4, res = 6 * 4, res = 24    |
                             |                             | i = 5, res = 24 * 5, res = 120  |
                             |                             | i = 6, res = 120 * 6, res = 720 |

*/