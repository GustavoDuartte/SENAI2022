#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, nums[6];
	
	for(i = 0; i < 6; i++){
		printf("Digite o %do. valor : ", i+1);
		scanf("%d", &nums[i]);
	}
	
	for(i = 7; i >= 0; i--){
	 printf("{%d}\n",nums[i]);
	}
	
		
	
	
}

