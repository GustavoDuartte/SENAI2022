#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int fatorial(int num){
	int i;
	
	for(i = num-1; i >= 1; i--){
		num = num * i;
	}
	return num;
}

int main(){
	int num;
	
	printf("Digite um numero para que seja feito o fatorial do mesmo: ");
	scanf("%d",&num);
	
	printf("o fatorial do numero %d e igual a: %d",num,fatorial(num));
	
	return 0;
}
