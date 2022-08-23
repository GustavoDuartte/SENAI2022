#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float vel, dist, h;
	
	printf("Digite a velocidade do carro: ");
	scanf("%f", &vel);
	
	printf("Digite a distancia a ser percorrida pelo carro: ");
	scanf("%f", &dist);
	
	//t=v/d
	
	h = (float) vel / dist;
	
	printf("O tempo em que o carro ira demorar para percorrer o trajeto, será em %.2f horas ", h);
	
	return 0;
}
