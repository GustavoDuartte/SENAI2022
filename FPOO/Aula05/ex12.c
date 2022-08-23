#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int maval,meval,i,val;
	
	for(i = 1; i <= 10; i++){
		printf("Digite um numero: ");
		scanf("%d",&val);
		
		if(i==1){
			maval = val;
		}
		if(val>maval){
			maval = val;
	}
}
printf("O maior numero digitado e: %d",maval);
}