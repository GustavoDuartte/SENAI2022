#include <stdio.h>
#include <locale.h>
#include <string.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int i,j,m[3][3];
    srand(time(NULL));
    
    for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
    		m[i][j]=rand()%10;
		}
	}
	
	for(i = 0; i <5; i++){
        for(j = 0; j <5; j++){
            if(m[i][j] < m[i][j]){
            	
            }
        }
    }
    
    
    for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
    		printf("[%d]",m[i][j]);
		}
	}
    
}
