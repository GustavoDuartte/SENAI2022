#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	float preco;
	
	printf("Pre�o do p�o: ");
	scanf("%f",&preco);
	
	printf("Panificadora P�o de Ontem - Tabela de pre�os\n");
	
	for (i = 1; i <= 50; i++){
		printf("%d - R$ %.2f\n",i,preco*i);
		
	}
	
}
