#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, a[8], b[8], c[8];
	
	printf("Digite o tamanho dos 3 lados de 8 triangulos: (Digite valores inteiros)");
	for(i = 0; i < 8; i++){
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	printf("\n");
	for(i = 0; i < 8; i++){
		if(a[i] == b[i] && b[i] == c[i])printf("Equilatero\n");
		else if(a[i] == b[i] && b[i] != c[i] || a[i] != b[i] && b[i] == c[i] || a[i] != b[i] && a[i] == c[i])printf("Isosceles\n");
		else if(a[i] != b[i] && b[i] != c[i] && a[i] != c[i])printf("Escaleno\n");
	}
	
}
