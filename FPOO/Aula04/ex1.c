#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float prec, reajuste;
						
	printf("Digite o preço do produto: ");
	scanf("%f" ,&prec);
	
	
	if(prec >= 1000){
	reajuste = prec - (prec * 8/100);
		printf("Você ganhou um desconto de 8%% por comprar um produto com preço maior de R$1000 \n passando de R$ %.2f para R$ %.2f", prec, reajuste);
	}else{
		printf("Você não gastou mais de R$1000, então não irá receber o desconto. ");
	}
	
}
