#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");	
	
	float nota1 , nota2 , nota3 , media;
	
	printf("Digite as tres notas de um aluno: \n");
	printf("Nota 1: ");
	scanf("%f",&nota1);
	
	printf("Nota 2: ");
	scanf("%f",&nota2);
	
	printf("Nota 3: ");
	scanf("%f",&nota3);
	
	media = (nota1 + nota2 + nota3 ) / 3;
	
	if(media >= 6){
		printf("APROVADO");
	}else if(media < 6 && media >= 4){
		printf("RECUPERAÇÃO");
	}else{
		printf("REPROVADO");
	}
	
	

}
