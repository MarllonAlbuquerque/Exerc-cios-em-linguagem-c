#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//ler o número desejado.
	int num;
	
	printf("Digite seu número : ");
	scanf("%d",&num);
	//usar um if no qual temos a fórmula.
	if(num%2==0){
		printf("%d é par",num);
	}
	else{
		printf("%d é Impar",num);
	}
	 
	//printar o resultado.
	
	return 0;
	

}
