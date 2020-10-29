#include <stdio.h>
int main(){
	int base,expoente,i=0,x=1;
	//Leia dois números inteiros
	printf("Digite base: ");
	scanf("%d",&base);
	
	printf("Digite o expoente: ");
	scanf("%d",&expoente);
	//Calcule o valor da base elevado ao expoente. 
	for(i;i<expoente;i++){
		x=x*base;
	}//printar o resultado
	printf("Resultado = %d",x);
	return 0;
}

