#include <stdio.h>
int main(){
	
char nome [10];
char copia[10];
int i = 0;

	printf("Digite seu primeiro nome : ");
	scanf("%s",&nome);
	
	while( nome[i] != '\0'){
		
		copia[i] = nome[i];
		
		i++;
			
	}
	printf("\n%s",copia);
		
}

































