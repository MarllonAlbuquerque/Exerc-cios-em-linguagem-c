#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float nota1,nota2,res;
	
	//Ler a primeira nota dentro de uma vari�vel.
	
	printf("Digite sua primeira nota : ");
	scanf("%f",&nota1);
	
	//Ler a segunda nota dentro de outra vari�vel.
	
	printf("Digite sua segunda nota : ");
	scanf("%f",&nota2);
	
	//Somar as duas notas e dividir por dois colocando o resultado dentro de uma vari�vel.
	
	res = (nota1+nota2)/2;
	
	//Escrever na tela o resultado.
	
	printf("M�dia : %.2f",res);
	
	return 0;
	

}
