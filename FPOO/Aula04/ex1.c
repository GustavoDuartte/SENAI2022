#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float prec, reajuste;
						
	printf("Digite o pre�o do produto: ");
	scanf("%f" ,&prec);
	
	
	if(prec >= 1000){
	reajuste = prec - (prec * 8/100);
		printf("Voc� ganhou um desconto de 8%% por comprar um produto com pre�o maior de R$1000 \n passando de R$ %.2f para R$ %.2f", prec, reajuste);
	}else{
		printf("Voc� n�o gastou mais de R$1000, ent�o n�o ir� receber o desconto. ");
	}
	
}
