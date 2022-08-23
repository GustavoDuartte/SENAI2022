#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float sal, nsal;
	float desc;
	
	printf("Digite o salario: ");
	scanf("%f",&sal);
	
	if(sal <= 280.00){
		desc = sal *20/100;
		nsal = sal + desc;
		printf("O salario antes do reajuste e: R$%.2f\nO percentual de reajuste aplicado sera de: 20%%\nO valor do aumento sera de: R$%.2f\nO novo salario sera de: R$%.2f",sal,desc,nsal);
	}
	else if(sal >= 280.00 && sal <= 700.00){
		desc = sal*15/100;
		nsal = sal + desc;
		printf("O salario antes do reajuste e: R$%.2f\nO percentual de reajuste aplicado sera de: 15%%\nO valor do aumento sera de: R$%.2f\nO novo salario sera de: R$%.2f",sal,desc,nsal);
	}
	else if(sal >= 700.00 && sal <= 1500.00){
		desc = sal*10/100;
		nsal = sal + desc;
		printf("O salario antes do reajuste e: R$%.2f\nO percentual de reajuste aplicado sera de: 10%%\nO valor do aumento sera de: R$%.2f\nO novo salario sera de: R$%.2f",sal,desc,nsal);
	}
	else if(sal >= 1500.00){
		desc = sal*5/100;
		nsal = sal + desc;
		printf("O salario antes do reajuste e: R$%.2f\nO percentual de reajuste aplicado sera de: 5%%\nO valor do aumento sera de: R$%.2f\nO novo salario sera de: R$%.2f",sal,desc,nsal);
	}
	
}