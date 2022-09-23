#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
	
	char alunos[5][15];
	float nota1[5], nota2[5], medias [5];
	int i;
	
	printf("Digite os nomes dos alunos:\n");
	for(i = 0; i < 5; i++){
		scanf("%s", &alunos[i]);
	}
	
	printf("Digite a primeira e segunda nota respectivamente de cada aluno:\n");
	for(i = 0; i < 5; i++){
		scanf("%f%f", &nota1[i], &nota2[i]);
	}
	
	printf("\tAluno\t\tNota 1\t\tNota2\t\tM?dias\n");
	for(i = 0; i < 5; i++){
		medias[i]= (nota1[i] + nota2[i]) / 2;
		printf("\t%s\t\t%.1f\t\t%.1f\t\t%.1f\n", alunos[i], nota1[i], nota2[i], medias[i]);
	}
}
