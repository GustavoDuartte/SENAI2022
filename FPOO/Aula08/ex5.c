#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<locale.h>

bool numero(int num, int num2){
	int tf;
	
	if(num==num2){
		tf = 1;
	}else{
		tf = 0;
	}
	return tf;	
}

int main(){
	int num,num2;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	
	printf("1 = Numeros iguais\n0 = Numeros diferentes\n");
	printf("%d",numero(num,num2));
	return 0;
}
