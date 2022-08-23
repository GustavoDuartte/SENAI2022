#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n, n1, n2;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	n1 = n - 1;
	n2 = n + 1;
	
	printf("O numero digitado -1 é: %d\n", n1);
	printf("O numero digitado +1 é: %d", n2);
	
}

