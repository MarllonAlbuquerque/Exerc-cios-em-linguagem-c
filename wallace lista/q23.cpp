#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char palavra[100];
	char segunda[100];
	int i,r;
	//lendo o texto do usuário.
	printf("Digite um texto [max 100 chars] : ");
	scanf("%[^\n]s",&palavra);
	//usando um for para printar cada letra dele, e um if para caso um caracter de espaço seja encontrado o programa pule para a linha seguinte.
	for(r=0,i=strlen(palavra);r<=strlen(palavra),i>=0;i--,r++){
	  segunda[r] = palavra[i];
	}
	for(i=0;i< strlen(segunda);i++){
		printf("%c",segunda[i]);
	}
	return 0;
}

















