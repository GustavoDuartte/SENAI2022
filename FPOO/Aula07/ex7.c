#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int i,j,m[3][3],v=0,posi,posj;
    srand(time(NULL));
    
    for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
    		m[i][j]=rand()%10;
		}
	}
	
	for(i = 0; i <3; i++){
        for(j = 0; j <3; j++){
            if(v < m[i][j]){
            	v = m[i][j];
				posi=i;
				posj=j;	
            }
        }
    }
            	
    for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
    		printf("[%d]",m[i][j]);
		}
		printf("\n");
	}
	printf("\nO maior numero gerado é: %d",v);
	printf("\nA linha do numero é: %d, e a coluna é: %d",posi+1,posj+1);
    
}
