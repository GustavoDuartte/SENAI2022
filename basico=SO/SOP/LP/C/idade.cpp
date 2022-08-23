#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char nome[30];
	int idade;
	
	printf("Digite o nome: ");
	gets(nome);
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	if(idade<13){
		printf("Você é uma criança, %s" ,nome);
	}
	else if(idade<18){
		printf("Você é um adolescente, %s" ,nome);
	}
	else if(idade<24){
		printf("Você é um jovem, %s" ,nome);
	}
	else if(idade<40){
		printf("Você é um adulto, %s" ,nome);
	}
	else if(idade<59){
		printf("Você é um meia idade, %s" ,nome);
	}
	else if(idade<150){
		printf("Você é um idoso, %s" ,nome);
	}
	
	
}
