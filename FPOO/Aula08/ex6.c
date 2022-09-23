#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void retangulo(int x, int y, char c){
	int i, j;
	
	for(i = 0; i < y; i++){
		for(j = 0; j < x; j++)
			printf("%c\n",c);		
		printf("\n");
	}
	

}

int main(){
	int l, a;
	char c;
	
	printf("Digite a largura, altura, e caractere: ");
	scanf("%d",&l);
	scanf("%d",&a);
	c = getch();
	
	retangulo(l,a,c); 
	
	return 0;
}
