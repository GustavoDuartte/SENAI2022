#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float salb, sall, ir, inss, sind, hrsd, salhr, desc;
	
	printf("Digite quanto você ganha por hora: ");
	scanf("%f",&salhr);
	
	printf("Digite quantas horas você trabalha por mês: ");
	scanf("%f",&hrsd);
	
	salb = salhr * hrsd;
	
	ir = salb * 11/100;
	inss = salb * 8/100;
	sind = salb * 5/100;
	
	desc = ir + inss + sind;
	sall = salb - desc;
	
	printf("+ Salario Bruto : R$%.2f\n- IR (11%%) : R$%.2f\n- INSS (8%%) : R$%.2f\n- Sindicato (5%%) : R$%.2f\n",salb,ir,inss,sind);
	printf("\n");
	printf("- Salario Liquido : R$%.2f",sall);
	
}
