/*

real ler() 
	real a 
	escreva(�Digite seu peso: �) 
	leia(a) 
	retornar a 
fim

real calcularPesoEmMarte(real pesoTerra) 
	real pesoMarte 
	pesoMarte <- pesoTerra / 9.81 * 3.711 
	retornar pesoMarte 
fim

nada apresentar(real pesoMarte) 
	escreva(�Em Marte, voc� pesaria:� , pesoMarte) 
fim

in�cio 
	real pesoTerra, pesoMarte  
	ler() 
	calcularPesoEmMarte(pesoTerra) 
	apresentar(pesoMarte) 
fim

RESPOSTA:
O resultado da fun��o ler, n�o est� sendo armazenado na v�riavel pesoTerra e pesoMarte.

*/