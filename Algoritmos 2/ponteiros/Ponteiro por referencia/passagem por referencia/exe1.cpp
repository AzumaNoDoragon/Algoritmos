/*
Altere as chamadas de fun��es abaixo de forma que a fun��o chamada n�o tenha 
retorno e, ao mesmo tempo, a vari�vel que antes receberia o valor retornado possa 
ser alterado diretamente na fun��o chamada. 

original:
ano = lerDado(); 
a = recebendoUmValor();  
idade = calcularIdade(ano);  
b = calcularAlgo(a); 
c = somar(a,b); 
c = fazAlgo(a,b); 
d = getRA(); 
e = getValor();


Reescrito (sem retorno, alterando os valores por refer�ncia):
lerDado(&ano); 
recebendoUmValor(&a);  
calcularIdade(ano, &idade);  
calcularAlgo(a, &b); 
somar(a, b, &c); 
fazAlgo(a, b, &c); 
getRA(&d); 
getValor(&e);
*/