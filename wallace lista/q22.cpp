#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char palavra[100];
	int i;
	//lendo o texto do usu�rio.
	printf("Digite um texto [max 100 chars] : ");
	scanf("%[^\n]s",&palavra);
	//usando um for para printar cada letra dele, e um if para caso um caracter de espa�o seja encontrado o programa pule para a linha seguinte.
	for(i=0;i<strlen(palavra);i++){
		printf("%c",palavra[i]);
		if(palavra[i] == ' '){
			printf("\n");
		}
	}
	return 0;
}







