//Pal�ndromo � a frase ou palavra que se pode ler, indiferentemente, da esquerda para a direita ou vice-versa, como por exemplo a palavra ARARA ou o nome ANA.
//Escreva um programa que receba do usu�rio um texto e informe se � pal�ndromo ou n�o.
//Desconsidere caracteres em ma�usculo, por exemplo, o nome Ana deve ser identificado como pal�ndromo.

#include <stdio.h>

int main(){
	
	char palavra[100];
	char invertida[100];
	int tamanho = 0 , j = 0 , i = 0 , erro = 0;
	
	printf("Digite sua palavra : ");
	scanf("%s",&palavra);
	
	for(tamanho ; palavra[tamanho] != '\0' ; tamanho++){
	}
	
	j = tamanho;
	tamanho++;
	j--;
	
	for(i = 0 ; i < tamanho ; i++){
		invertida[i] = palavra[j];
		j--;
	}
	
	tamanho--;
	
	for(i= 0 ; i < tamanho ; i++){
		if( palavra[i] != invertida[i]){
			erro++;
		}
	}
	
	if(erro){
		printf("Nao e um palindromo");
	}
	else{
		printf("E um palindromo");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

}
