#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	float preco;
	
	printf("Digite o pre�o do p�o: ");
	scanf("%f",&preco);
	
	for (i = 1; i <= 50; i++){
		printf("%d - R$ %.2f\n",i,preco*i);
		
	}
	
}
