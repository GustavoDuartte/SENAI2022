#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	char nome[5][30];
	int peso[5];
	float altura[5],imc[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite o nome da %da. pessoa: ",i+1);
		scanf("%s",&nome[i]);
	}
	printf("Digite o peso(em kg) das 5 pessoas respectivamente: \n");
	for(i = 0; i < 5; i++){
		scanf("%d",&peso[i]);
	}
	
	printf("Digite a altura(em metros) das 5 pessoas respectivamente: (Ex: 1,85)\n");
	for(i = 0; i < 5; i++){
		scanf("%f",&altura[i]);
	}
	
	for(i = 0; i < 5; i++){
		imc[i] = peso[i]/(altura[i]*altura[i]); 
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("[ %s ]: Peso: [%d] Altura: [%.2f] IMC: [%.3f]\n",nome[i],peso[i],altura[i],imc[i]);
	}

}
