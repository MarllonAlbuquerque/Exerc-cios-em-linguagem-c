#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
	
	char palavra[100];
	char mais[100];
	char menos[100];
	int i;
	//lendo o texto desejado
	printf("Digite um texto [max 100 chars] : ");
	scanf("%s",&palavra);
	//lendo os caracteres e trnasformando em maiúsculo
	for(i=0;i<=strlen(palavra);i++){
		
		mais[i] = toupper(palavra[i]);
	}//lendo os caracteres e transformando em minúsculo.
	for(i=0;i<=strlen(palavra);i++){
		menos[i] = tolower(palavra[i]);
	}
	
	
	//printando os resultados.
	printf("%s\n",mais);
	printf("%s",menos);
	
	
			
	return 0;
}
