#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float area, lata, galao, plata, pgalao, cobert = 6;
	
	printf("Dig?te o tamanho em metros quadrados (m?) da ?rea ? ser pintada : ");
	scanf("%f", &area);
	
	lata = area / (18 * cobert);
	galao = area / (3.6 * cobert);
	
	plata = lata * 80;
	pgalao = galao * 25; 
	
	printf(" Quantidade de latas (18L/lata) : %.2f. Pre?o : R$ %.2f.\nQuantidade de gal?es (3,6L/gal?o) : %.2f . Pre?o : R$ %.2f. ", lata, plata, galao, pgalao);
	
}
