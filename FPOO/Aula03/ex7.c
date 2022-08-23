#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int cam, alq, talq, tcam;
	float viag;
	
	printf("Digite quantos caminhões ira fazer a viagem: ");
	scanf("%d", &cam);
	
	printf("Digite o total de alqueires que a fazenda possui: ");
	scanf("%d", &alq);
	
	tcam = 18 * cam;
	talq = 250 * alq;
	
	viag = talq/ tcam;
	
	printf("Com %d caminhões e com %d alqueires, \n será necessario um total de %.1f viagens. ", cam, alq, viag);
	
}
