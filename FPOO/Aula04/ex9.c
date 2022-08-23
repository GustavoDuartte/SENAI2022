#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");

	float sal, nsal;
	
	printf("Para que seja aplicado aumento no salario que seja acima de R$1500\n Digite seu salario: ");
	scanf("%f",&sal);
	
	if(sal >= 1500 && sal < 1750){
		nsal = sal + (sal * 15/100);
		printf("Com aumento de 15%%, Seu salario saira de R$%.2f para R$%.2f ",sal,nsal);
	}else if(sal >= 1750 && sal < 2000){
		nsal = sal + (sal * 12/100);
		printf("Com aumento de 12%%, Seu salario saira de R$%.2f para R$%.2f ",sal,nsal);
	}else if(sal >= 2000 && sal < 3000){
		nsal = sal + (sal * 9/100);
		printf("Com aumento de 9%%, Seu salario saira de R$%.2f para R$%.2f ",sal,nsal);
	}else if(sal >= 3000){
		nsal = sal + (sal * 6/100);
		printf("Com aumento de 6%%, Seu salario saira de R$%.2f para R$%.2f ",sal,nsal);
	}else{
		printf("Digite um salario maior que R$1500");
	}
	
}
