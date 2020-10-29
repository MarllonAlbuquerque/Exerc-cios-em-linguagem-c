#include <stdio.h>
int main(){
	
	int matriz[3][4];
	int i,j,maior;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Preencha a linha %d coluna %d : ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for ( i=0; i<3; i++ ){
		for ( j=0; j<4; j++ )
		{
			if(i==0){maior=matriz[i][j];}
			
			if(matriz[i][j] > maior)
			{maior = matriz[i][j];}
		}
		    }
	    printf("Maior : %d",maior);
	   return 0;
	}
	

