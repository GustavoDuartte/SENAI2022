#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");

	float sal, nsal;
	int filho;
	
	printf("Digite seu salario: ");
	scanf("%f", &sal);
	
	printf("Digite quantos filhos voc� possui: ");
	scanf("%d" , &filho);
	
	if(sal<2000){
		nsal = sal+(45*filho);
		printf("Como voc� ganha menos que R$2000, voc� recebera um reajuste de R$45 por filho. \n Seu novo salario sera de R$ %.2f ",nsal);
	}else{
		printf("Voc� ganha mais de 2000, ent�o esse programa n�o � para voc�. ");
	}

}
