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
		printf("Voc� � uma crian�a, %s" ,nome);
	}
	else if(idade<18){
		printf("Voc� � um adolescente, %s" ,nome);
	}
	else if(idade<24){
		printf("Voc� � um jovem, %s" ,nome);
	}
	else if(idade<40){
		printf("Voc� � um adulto, %s" ,nome);
	}
	else if(idade<59){
		printf("Voc� � um meia idade, %s" ,nome);
	}
	else if(idade<150){
		printf("Voc� � um idoso, %s" ,nome);
	}
	
	
}
