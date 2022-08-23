#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float area, lata, galao, plata, pgalao, cobert = 6;
	
	printf("Digite o tamanho em metros quadrados da area a ser pintada : ");
	scanf("%f", &area);
	
	lata = area / (18 * cobert);
	galao = area / (3.6 * cobert);
	
	plata = lata * 80;
	pgalao = galao * 25; 
	
	printf("Quantidade de latas (18L/lata) : %.2f. Preco : R$ %.2f.\nQuantidade de galoes (3,6L/galao) : %.2f . Preco : R$ %.2f. ", lata, plata, galao, pgalao);
	
}
