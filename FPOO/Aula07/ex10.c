#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	char nome[5][30];
	float nota1[5], nota2[5],media[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite o nome do %do. aluno: ",i+1);
		scanf("%s",&nome[i]);
	}
	
	printf("Digite as primeiras notas dos 5 alunos respectivamente: \n");
	for(i = 0; i < 5; i++){
		scanf("%f",&nota1[i]);
	}
	printf("Digite a segunda nota dos 5 alunos respectivamente: \n");
	for(i = 0; i < 5; i++){
		scanf("%f",&nota2[i]);
	}
	for(i = 0; i < 5; i++){
		media[i] = (nota1[i] + nota2[i])/2;
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("[ %s ]: Nota 1: [%.1f] Nota 2: [%.1f] Media: [%.1f]\n",nome[i],nota1[i],nota2[i],media[i]);
	}
	
	
	

}
