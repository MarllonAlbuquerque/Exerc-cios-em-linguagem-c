#include<stdio.h>
int main (void )
{
   int matriz[5][5] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   int i,j;
   //usar um i no for para percorrer as linhas da matriz.
   for(i=0;i<5;i++){
   	  for(j=0;j<5;j++){//usar outro for para percorrer as colunas da matriz com o j.
   	  	printf("%d ",matriz[i][j]);//printando cada elemento dentro da matriz.
   	  	
		}
	  printf("\n");//pulando ao fim de cada linha.
   }
  return(0);
}
