#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	//lendo o n�mero.
	printf("Digite um n�mero : ");
	scanf("%d",&num);
	//printando o n�mero com a m�scara de inteiro.
	printf("O n�mero digitado foi %d ",num);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
