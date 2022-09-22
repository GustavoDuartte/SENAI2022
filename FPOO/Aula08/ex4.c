#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<locale.h>

void numero(int num, int num2){
	
	if(num>num2){
		printf("%d",num);
	}else{
		printf("%d",num2);
	}
		
}

int main(){
	int num,num2;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	
	printf("O maior numero e: ");
	numero(num,num2);
	
	return 0;
}
