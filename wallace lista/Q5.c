#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float altura,base,res;
	
	//ler a altura.
	printf("Digite a altura : ");
	scanf("%f",&altura);
	//ler a base.
	printf("Digite a base : ");
	scanf("%f",&base);
	//aplicando a fórmula e colocando o resultado numa variável.
	res = (base*altura)/2;
	//printando o resultado na tela.
	printf("%.2f",res);
	
	return 0;
	

}
