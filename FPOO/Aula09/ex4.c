#include <stdio.h>
#include <locale.h>

int idade(int num){
	
	printf("Dig?te o ano de seu nascimento: ");
	scanf("%d", &num);
	
	printf("Voc? tem %d anos de idade.\n", num = 2022 - num);
	
	return num;
}
void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	idade(num);
		
}
