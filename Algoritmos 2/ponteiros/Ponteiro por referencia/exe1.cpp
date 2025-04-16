/*
Altere as chamadas de funções abaixo de forma que a função chamada não tenha 
retorno e, ao mesmo tempo, a variável que antes receberia o valor retornado possa 
ser alterado diretamente na função chamada. 

original:
ano = lerDado(); 
a = recebendoUmValor();  
idade = calcularIdade(ano);  
b = calcularAlgo(a); 
c = somar(a,b); 
c = fazAlgo(a,b); 
d = getRA(); 
e = getValor();


Reescrito (sem retorno, alterando os valores por referência):
lerDado(&ano); 
recebendoUmValor(&a);  
calcularIdade(ano, &idade);  
calcularAlgo(a, &b); 
somar(a, b, &c); 
fazAlgo(a, b, &c); 
getRA(&d); 
getValor(&e);
*/