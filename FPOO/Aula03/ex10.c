#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char cidade[20];
	int eleitores, votos;
	float part;
	
	printf("Nome de sua cidade : ");
	gets(cidade);
	printf("Número total de eleitores : ");
	scanf("%d", &eleitores);
	printf("Votos apurados : ");
	scanf("%d", &votos);
	
	 part = (float) votos / eleitores * 100;
	 
	 printf("A portentagem %% de participantes nesta ultima eleição foi de : %.2f%%", part);
	
}
