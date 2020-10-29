#include <stdio.h>
#include <string.h>

int main () {
	char nome[100];
	int i;
	//lendo o nome 
	printf("Digite seu nome : ");
	scanf("%s",&nome);
    //printando o nome apenas como string normal.	
	printf("%s",nome);
	//printando coda caracter apartir do indice pulando linhas.
	for(i=0;i<=strlen(nome);i++){
		printf("\n%c",nome[i]);
	}
	//correndo o vetor apartir do último caracter até o primeiro.
	for(i=strlen(nome);i>=0;i--){
		printf("\n%c",nome[i]);
	}		
	return 0;
}
