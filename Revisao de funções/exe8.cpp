/*

inteiro ler() 
	inteiro a 
	escreva(“Digite um valor:”) 
	leia(a) 
	retornar a 
fim

inteiro dobro(inteiro val) 
	inteiro res 
	res <- val * 2   
	retornar res 
fim 

nada apresentar(inteiro res) 
	escreva(“Dobro:” , res) 
fim 

início 
	inteiro val, res  
	val <- ler() 
	res <- dobro(inteiro val) 
	apresentar(inteiro res) 
fim

RESPOSTA:
O erro está na chamada das funções dobro e apresentar, onde está passando o tipo
por parametros, mas deveria passar apenas a variavel.

*/