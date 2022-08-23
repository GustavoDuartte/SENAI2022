#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float peso, excesso, multa;
	
	printf("Digite quantos kilos foi a pesca desta vez: ");
	scanf("%f",&peso);
	
	if(peso>50){
	
	excesso = peso - 50;
	multa = excesso * 4;
	
	printf("O peso em kilos da pesca foi: %.2f\no excesso de peso é de: %.2f\na multa em reais para cada kilo excedente é de: R$%.2f",peso,excesso,multa);
	}else{
		printf("O peso %.2f é menor doque 50 kilos, então, não havera multa.",peso);
	}

}
