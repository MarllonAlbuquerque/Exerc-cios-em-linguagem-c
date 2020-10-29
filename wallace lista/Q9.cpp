#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Ler os dados: o ano de nascimento do empregado e o ano de seu ingresso na companhia.
	// O programa deverá escrever a idade e o tempo de trabalho do empregado e a mensagem
	// “Requerer aposentadoria” ou “Não requerer”. Obs.: Utilize como ano atual o ano de 2011.
	
	int ano,ingresso;
	
	//lendo ano de nascimento.
	printf("Digite seu ano de nascimento : ");
	scanf("%d",&ano);
	//lendo ano de ingresso.
	printf("Digite o ano de seu ingresso na companhia : ");
	scanf("%d",&ingresso);
	
	ano = 2011 - ano;
	ingresso = 2011 - ingresso;
	
	//escrevendo idade
	printf("\nIdade : %d",ano);
	//escrevendo tempo de trabalho
	printf("\nTempo de trabalho : %d",ingresso);
	//if para caso atenda aos itens
	if(ano >= 65){
		printf("\nRequerer aposentadoria");
	}
	else if(ingresso >= 30){
		printf("\nRequerer aposentadoria");
	}
	else if(ano >= 60 && ingresso >= 25){
		printf("\nRequerer aposentadoria");
	}
	else {
		printf("\nNão requerer");
	}

	return 0;
	
}
