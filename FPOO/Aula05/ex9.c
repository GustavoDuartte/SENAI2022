#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, num, total=0;
	
	for(i = 1; i <= 15; i++){
		printf("Digite um valor: ");
		scanf("%d",&num);
		total = total + num;
	}
	printf("A soma dos valores digitados é %d",total);
	
}
