#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i,num,num2;
	
	printf("Digite um numero para que apareça todos os numeros entre um e o outro valor digitado: ");
	scanf("%d",&num);
	
	printf("Digite outro numero: ");	
	scanf("%d",&num2);
	
	for(i = num; i <= num2; i++){
		printf("%d\n",i);
	}
	
}
