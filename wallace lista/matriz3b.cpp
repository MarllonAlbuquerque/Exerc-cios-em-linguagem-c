#include <stdio.h>
int main(){
	
	int matriz[3][4];
	int i,j,menor;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Preencha a linha %d coluna %d : ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for ( i=0; i<3; i++ ){
		for ( j=0; j<4; j++ )
		{
			if(i==0){menor=matriz[i][j];}
			
			if(matriz[i][j] < menor)
			{menor = matriz[i][j];}
		}
		    }
	    printf("Menor : %d",menor);
	   return 0;
	}
