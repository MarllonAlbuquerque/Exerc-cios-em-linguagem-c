#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float f,c;
	//lendo a temperatura.
	printf("Digite a temperatura em fahrenheit : ");
	scanf("%f",&f);
	//usando a a fórmula dada na questão e colocando o resultado na variável c.
	c = (f-32)*(5.0/9);
	//printando o resultado.
	printf("%f.3 em celcius é %f.3",f,c);
	
	return 0;
	

}
