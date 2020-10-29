#include <stdio.h>

int main(){
	
	int linha,coluna,i,j;
	//ler a linha desejada 
	printf("Digite o tamanho desejado da linha : ");
	scanf("%d",&linha);
	//ler a coluna desejada
	printf("Digite o tamanho da coluna :  ");
	scanf("%d",&coluna);
	//unir os valores colocados dentro da matriz
	int matriz[linha][coluna];
	//colocar o valor zero em todos os espaços da matriz apartir de um for
	for ( i=0; i<linha; i++ )
	    for ( j=0; j<coluna; j++ )
	    {
	      matriz[ i ][ j ] = 0;
	    }
	//printando esses valores.    
	for ( i=0; i<linha; i++ ){
			for ( j=0; j<coluna; j++ )
		    {
		      printf("%d ",matriz[i][j]);
		    }
		printf("\n"); 
	}
	return 0;
}
