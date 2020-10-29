#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char letra;
    //ler o caracter.
	printf("Digite uma caracter : ");
	scanf("%c",&letra);
	//printar o mesmo com as máscaras correspondentes.
	printf("\n%c",letra);
	printf("\n%d",letra);
	printf("\n%x",letra);
	
	
	return 0;
}
