#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	int vit, emp, tp, vit1;
	
	printf("Digite o nome do time de futebol: ");
	gets(nome);
	
	printf("Digite o numero de vitorias do time: ");
	scanf("%d", &vit);
	
	printf("Digite o numero de empates do time: ");
	scanf("%d", &emp);
	
	vit1 = vit * 3;
	
	tp = vit1 + emp;
	
	printf("O total de pontos do time %s, é de: %d", nome, tp);
	
	
}	
