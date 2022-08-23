#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");

	int num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	
	if(num1 > num2){
		printf("O numero %d é maior que o numero %d. ",num1,num2);
	}else{
		printf("O numero %d é maior que o numero %d. ",num2,num1);
	}
	
}
