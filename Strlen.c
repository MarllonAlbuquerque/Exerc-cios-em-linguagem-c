#include <stdio.h>

int main(){
	
	char string[100];
	int i = 0 , j = 0;
	
	printf("\n-----Contador de caracter-----");
	
	printf("\nDigite a palavra desejada : ");
	scanf("%[^\n]s",&string);
	
	for(i ; string[i]!= '\0' ; i++ ){
		
		if (string[i] == ' ' ){
			j++;
		}   
	}
	
	i = i - j;
	
	printf("\nQuantidade de letras : %d",i);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
