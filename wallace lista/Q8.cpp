#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1,num2,num3;
	//lendo o primeiro número.
	printf("Digite o primeiro número : ");
	scanf("%d",&num1);
	//lendo o segundo.
	printf("Digite o segundo número : ");
	scanf("%d",&num2);
	//lendo o terceiro.
	printf("Digite o terceiro número : ");
	scanf("%d",&num3);
	//caso o primeiro seja menor que os outros: num1 é o menor.
	if(num1 < num2 && num1 < num3){
		printf("%d é o menor",num1);
	}//caso o segundo seja menor que os outros: num2 é o menor.
	else if(num2 < num1 && num2 < num3){
		printf("%d é o menor",num2);
	}//caso o terceiro seja menor que os outros: num3 é o menor.
	else if(num3 < num1 && num3 < num2){
		printf("%d é o menor",num3);
	}
	
	return 0;
	

}
