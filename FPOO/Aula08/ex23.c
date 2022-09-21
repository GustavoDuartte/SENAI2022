#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

float celsius(float cel){
	scanf("%f", &cel);
	
	cel = (cel - 32) / 1.8;
	
	printf("----------------PROCESSANDO----------------------\n\n");
	printf("Temperatura em  Celsius (°C): %.1f\n\n", cel);
	printf("-------------------------------------------------\n");
	
}
float fahrenheit(float fah){
	scanf("%f", &fah);
	
	fah = (fah * 1.8) + 32;
	
	printf("----------------PROCESSANDO----------------------\n\n");
	printf("Temperatura em  Fahrenheits (°F): %.1f\n\n", fah);
	printf("-------------------------------------------------\n");
	
}

void main(float argc, char*argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	float fah, cel;
	
	printf("Digite a temperatura em Celsius : ");
	fahrenheit(fah);
	
	printf("Digite a temperatura em Fahrenheit: ");
	celsius(cel);
	
}

