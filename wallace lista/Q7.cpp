#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//ler o n�mero desejado.
	int num;
	
	printf("Digite seu n�mero : ");
	scanf("%d",&num);
	//usar um if no qual temos a f�rmula.
	if(num%2==0){
		printf("%d � par",num);
	}
	else{
		printf("%d � Impar",num);
	}
	 
	//printar o resultado.
	
	return 0;
	

}
