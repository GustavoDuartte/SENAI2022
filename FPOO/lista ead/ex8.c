#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	float preco = 1.99;
	
	printf("Lojas Quase Dois - Tabela de preços\n");
	
	for (i = 1; i <= 50; i++){
		printf("%d - R$ %.2f\n",i,preco*i);
		
	}
	
}
