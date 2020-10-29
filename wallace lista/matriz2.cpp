#include <stdio.h>
int main(){
	
	int matriz[3][4];
	int i,j,cont;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Preencha a linha %d coluna %d : ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for ( i=0; i<3; i++ ){
			for ( j=0; j<4; j++ )
		    {
		     if(matriz[i][j]==5){
		     	cont++;
			 }
		    }
	}
	printf("5 foi digitado : %d vezes",cont);
	
	return 0;
}
