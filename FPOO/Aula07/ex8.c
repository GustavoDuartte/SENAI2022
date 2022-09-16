#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int i,j,m[5][5],maio4=0,meno4=25,maio3=0,meno3=25;
    srand(time(NULL));
    
    for(i = 0; i < 5; i++){
    	for(j = 0; j < 5; j++){
    		m[i][j]=rand()%25;
		}
	}
	
	for(i = 0; i < 5; i++){
    	for(j = 0; j < 5; j++){
    		printf("[%d]\t",m[i][j]);
		}
		printf("\n");
	}
	for(j = 0; j < 5; j++){
		if(maio4 < m[4][j]){
			maio4 = m[4][j];
			
    	}if(meno4 > m[4][j]){
			meno4 = m[4][j];	
    	}
	}
	for(i = 0; i < 5; i++){
		if(maio3 < m[i][3]){
			maio3 = m[i][3];
			
    	}if(meno3 > m[i][3]){
			meno3 = m[i][3];	
    	}
	}
	
	printf("\nO maior numero da coluna 3 é: %d",maio3);
	printf("\nO menor numero da coluna 3 é: %d\n",meno3);
	printf("\nO maior numero da linha 4 é: %d",maio4);
	printf("\nO menor numero da linha 4 é: %d",meno4);
    
}
