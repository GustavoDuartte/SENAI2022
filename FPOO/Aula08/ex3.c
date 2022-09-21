#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<locale.h>

void numero(int maior){
	int num1, num2;
	
	if(num1>num2){
		maior = num1;
		numero(maior);
		printf("%d",maior);
	}else{
		printf("%d",maior);
	}
	
}

int main(){
	int num1, num2, maior;
	
	printf("Digite um numero: ");
	scanf("%d",&num1);
	
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	
	printf("O maior numero e: ");
	numero(maior);
	
	return 0;
}
