#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float f,c;
	//lendo a temperatura.
	printf("Digite a temperatura em fahrenheit : ");
	scanf("%f",&f);
	//usando a a f�rmula dada na quest�o e colocando o resultado na vari�vel c.
	c = (f-32)*(5.0/9);
	//printando o resultado.
	printf("%f.3 em celcius � %f.3",f,c);
	
	return 0;
	

}
