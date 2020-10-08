#include <stdio.h>

int main(){
	
	char primeiro[20];
	char segundo[20];
	int i = 0;
	
	printf("-----Comparador de palavras-----");
	
	printf("\nDigite sua primeira palavra : ");
	scanf("%s",&primeiro);
	
	printf("\nDigite sua segunda palavra : ");
	scanf("%s",&segundo);
	
	while(primeiro[i] == segundo[i]){ 
		
		i++;
		
		if(primeiro[i]=='\0' && segundo[i]=='\0'){
			printf("\n0 - As palavras sao iguais");
			return 0;
		}
		
	}
	
	printf("\nNao sao palavras iguais ");
	
	return 0;	
}
