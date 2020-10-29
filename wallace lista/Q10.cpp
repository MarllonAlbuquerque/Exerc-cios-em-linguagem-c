#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int ano,idade;
	//ler ano de nascimento.
	printf("Digitar ano de nascimento : ");
	scanf("%d",&ano);
	//calcular idade, ano atual 2011.
	idade = 2011 - ano;
	
	switch(idade)
	{	//* Infantil A --- de 5 a 7 anos
		case 5:
		case 6:
		case 7:
			printf("Nadador de idade %d é da categoria infantil A", idade);
		break;
		//* Infantil B --- de 8 a 10 anos
		case 8:
		case 9:
		case 10:
			printf("Nadador de idade %d é da categoria infantil B",idade);
		break;
		//* Juvenil A --- de 11 a 13 anos
		case 11:
		case 12:
		case 13:
			printf("Nadador de idade %d é da categoria juventil A",idade);
		break;
		//* Juvenil B --- de 14 a 17 anos
		case 14:
		case 15:
		case 16:
		case 17:
			printf("Nadador de idade %d é da categoria juvenil B",idade);
		break;	
	}//* Sênior --- maiores de 17 anos 
	if(idade > 17){
			printf("Nadador de idade %d é da categoria sênior",idade);
	}
	else if(idade < 5){
		printf("[ERRO]");
	}
	return 0;
	

}
