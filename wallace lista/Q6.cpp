#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	//ler o número desejado.
	printf("Digite um número : ");
	scanf("%d",&num);
	//usar um if onde se n >= 10 e n <= 15, o resultado é positivo.
	if(num >= 10 && num <= 15){
		printf("%d está contido entre 10 e 15",num);
	}//caso não , temos uma instrução de resposta negativa.
	else{
		printf("%d não está contido entre 10 e 15",num);
	}
	 	
	return 0;
	

}
