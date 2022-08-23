#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, num1, num2, total=0;
	
	printf("Digite um numero: ");
	scanf("%d",&num1);
	
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	
	for(i = num1; i <= num2; i++){
		total = total + 1;
	}
	printf("A soma dos valores entre o numero %d e o numero %d é %d",num1,num2,total);
	
}
