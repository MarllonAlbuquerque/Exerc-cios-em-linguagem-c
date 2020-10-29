#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	//lendo o número.
	printf("Digite um número : ");
	scanf("%d",&num);
	//printando o número com a máscara de inteiro.
	printf("O número digitado foi %d ",num);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
