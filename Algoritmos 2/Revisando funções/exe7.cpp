/*
real ler() 
	real a 
	escreva(“Digite a distância em quilômetros:”) 
	leia(a) 
	retornar a 
fim

inteiro converterKm_Mi(real km) 
	real mi 
	mi <- km * 0.62137 
	retornar mi 
fim

nada apresentar(real mi) 
	escreva(“Em milhas:” , mi) 
fim

inicio 
	real km, mi 
	km <- ler() 
	mi <- converterKm_Mi(km) 
	apresentar(mi) 
fim

RESPOSTA:
O código possui um erro de tipagem em no converterKm_Mi, a função deveria ser 
real/float.

*/