#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void numero(int dec){
	int num;
	
	if(dec/2!=0){
		num = dec/2;
		numero(num);
		printf("%d",dec%2);
	}else{
		printf("%d",dec%2);
	}
	
}

int main(){
	int dec;
	printf("Digite um numero decimal: ");
	scanf("%d",&dec);
	printf("Resultado: ");
	numero(dec);
	return 0;
}
