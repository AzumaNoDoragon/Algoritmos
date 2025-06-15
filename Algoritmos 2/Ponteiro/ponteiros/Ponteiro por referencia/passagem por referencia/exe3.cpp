/*
3 – Altere os códigos abaixo de forma que eles não retornem mais valores. No lugar, use 
ponteiros. 
A:
	int main(int argc, char** argv) { 
		int valor; 
		int quadrado; 
		  
		printf("\nDigite um valor:"); 
		scanf("%d",&valor); 
		 
		calcularQuadrado(valor, &quadrado); 
		  
		printf("\n%d ao quadrado = %d ",valor,quadrado); 
		  
		return 0; 
	}
	
	void calcularQuadrado(int val, int *quad){  
		*quad = val * val; 
	}

B:
	int main(int argc, char** argv) { 
		float celsius; 
		float kelvin; 
		
		printf("\nDigite a temperatura em Celsius:"); 
		scanf("%f",&celsius); 
		
		converterCparaK(celsius, &kelvin); 
		
		printf("\n%.2f Celsius = %.2f Kelvin",celsius,kelvin); 
		
		return 0; 
	} 
	
	void converterCparaK(float c, float *k){ 
		*k = c + 273.15f;
	} 
C:
	int main(int argc, char** argv) { 
		float celsius;
		float kelvin;
		
		printf("\nDigite a temperatura em Celsius:"); 
		scanf("%f",&celsius); 
		
		kelvin=converterCparaK(celsius); 
		
		printf("\n%.2f Celsius = %.2f Kelvin",celsius,kelvin); 
		
		return 0; 
	}
	
	float converterCparaK(float c){ 
		float k; 
		k = c + 273.15f; 
		return k; 
	} 

D: 
	int main(int argc, char** argv) { 
		int valor1, valor2; 
		int resultado; 
		
		printf("\nDigite um valor:"); 
		scanf("%d",&valor1); 
		
		printf("\nDigite outro valor:"); 
		scanf("%d",&valor2); 
		
		multiplicar(valor1, valor2, &resultado); 
		
		printf("\n%d x %d = %d ",valor1, valor2, resultado); 
		
		return 0; 
	} 
	
	void multiplicar(int a, int b, *res){ 
		*res = a * b; 
}
*/