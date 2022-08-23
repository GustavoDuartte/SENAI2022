#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int v;
	float d, t;
	v=900;
	
	printf("Digite a distancia da viagem que o avião vai percorrer: ");
	scanf("%f", &d);
	
	t = d / v;
	
	printf("O tempo que o avião vai demorar para fazer a viagem sera de: %.2f", t);
	
}
