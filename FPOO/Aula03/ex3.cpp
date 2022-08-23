#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	float sal, ind, nsal;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("Digite seu salario: ");
	scanf("%f", &sal);
	
	printf("Digite o indice percentual de reajuste: ");
	scanf("%f", &ind);
	
	nsal = (float) sal + sal * ind/100;
	
	printf("O novo salario de %s, sera de %.2f reais ", nome, nsal);
	
}
