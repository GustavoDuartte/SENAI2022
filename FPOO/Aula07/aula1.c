#include<stdio.h>
#include<locale.h>
#include<time.h>

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int m[5][5];
	int i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			m[i][j] = rand() % 100;
		}
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(m[i][j] < 10)
			printf("[%d:%d]:00%d\t",i,j,m[i][j]);
			else printf("[%d:%d]:%d\t",i,j,m[i][j]);
		}
		printf("\n");
	}
	
}
