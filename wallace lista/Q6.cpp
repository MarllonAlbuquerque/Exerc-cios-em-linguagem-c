#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	//ler o n�mero desejado.
	printf("Digite um n�mero : ");
	scanf("%d",&num);
	//usar um if onde se n >= 10 e n <= 15, o resultado � positivo.
	if(num >= 10 && num <= 15){
		printf("%d est� contido entre 10 e 15",num);
	}//caso n�o , temos uma instru��o de resposta negativa.
	else{
		printf("%d n�o est� contido entre 10 e 15",num);
	}
	 	
	return 0;
	

}
