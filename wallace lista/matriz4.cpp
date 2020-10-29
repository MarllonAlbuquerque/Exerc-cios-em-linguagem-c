#include <stdio.h>
int main(){
	
	int matriz[9][2];
	int nota1,nota2,i,j,res;
	
	for(i=0;i<=9;i++){
		for(j=0;j<=1;j++){
			printf("Aluno %d , nota %d =  ",i,j);#include <stdio.h>

int main () {
	
	int i;
	
	printf("\t\t\tEXIBICAO DE NUMEROS\n");
	printf("\t\t\t===================\n\n");
	
	printf ("Aperte enter para exibir os numeros de 32 a 126: ");
	getchar ();
		
	for (i = 32; i <= 126; i++) {
			printf ("%i\n", i);
		}
	for (i = 32; i <= 126; i++){
		printf ("%x\n", i);
	}
	for (i = 32; i <= 126; i++){
		printf("%c\n",i);
	}
			
			
	return 0;
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<=9;i++){
		res = (matriz[i][0] + matriz[i][1])/2;
	    matriz[i][2] = res;
	}
	printf("---------------------------------------");
	for(i=0;i<=9;i++){
		for(j=0;j<=2;j++){
			printf(" \nAluno %d : nota[%d] = %d ",i,j,matriz[i][j]);
		}
	}
	
	
	   return 0;
	}
