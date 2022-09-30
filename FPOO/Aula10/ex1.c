#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int idade, num, sexo;
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	printf("Digite seu sexo\nDigite 1 para masculino\nDigite 2 para feminino: \n");
	scanf("%d",&sexo);
	
	printf("Digite quantos dias faz desde que doou sangue pela ultima vez: ");
	scanf("%d",&num);
	
	if(idade < 16){
		printf("Voce nao esta apto para doar sangue\n");
	}else if(idade >= 16){
		if(sexo == 1){
			if(num < 60)printf("Voce nao esta apto para doar sangue\n");
			else if(num >= 60)printf("Voce esta apto para doar sangue\n");
		}else if(sexo == 2){
			if(num < 90)printf("Voce nao esta apto para doar sangue\n");
			else if(num >= 90)printf("Voce esta apto para doar sangue\n");
		}
	}else if(idade > 69)printf("Voce nao esta apto para doar sangue\n");
	
}
