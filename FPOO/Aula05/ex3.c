#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i,num;
	
	printf("Digite um numero para que apare�a todos os numeros entre 0 e o valor digitado: ");
	scanf("%d",&num);
	
	
	for(i = 0; i <= num; i++){
		printf("%d\n",i);
	}
	
}
