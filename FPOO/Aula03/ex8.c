#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float raio, area, altura, volume;
	const float pi = 3.1415;
	
	printf("Dig�te o valor do raio(cm2): ");
	scanf("%f", &raio);
	printf("Dig�te o valor da altura(cm2): ");
	scanf("%f", &altura);
	
	area = (raio * raio * pi * 2) + (2 * pi * raio * altura); 
	volume = raio * raio * pi * altura;
	
	printf("A �rea do cilindro � de %.2f(cm2) e o volume � %.2f(cm3).", area, volume);
	
}

