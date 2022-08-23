#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c, res;
	
	printf("Digite o valor da variavel A: ");
	scanf("%d", &a);
	printf("Digite o valor da variavel B: ");
	scanf("%d", &b);
	printf("Digite o valor da variavel C: ");
	scanf("%d", &c);
	
	res = ( a + b ) / c;
	
	printf("O resultado da conta (a+b)/c será: %d", res);
}
