#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
	setlocale(LC_ALL,"");
	
	int i, eleit[5], votos[5]; 
	float porc[5];
	char cidade[5][30];
	
	for(i = 0; i < 5; i++){
		printf("Digite o nome da %da. cidade: ",i+1);
		gets(cidade[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("Digite o total de eleitores da %da. cidade: ",i+1);
		scanf("%d",&eleit[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("Digite o numero total de votos apurados da ultima eleicao da %da. cidade: ",i+1);
		scanf("%d",&votos[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		porc[i] = (float) votos[i] / eleit[i] * 100;
		printf("A cidade [ %s ] teve %.1f%% de participação dos eleitores nos votos.\n",cidade[i],porc[i]);
	}
	
}
