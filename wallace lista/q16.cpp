#include <stdio.h>
int main(){
	
	int num,i;
	int cont = 0;
	//lendo o número.
	printf("Digite um numero : ");
	scanf("%d",&num);
	//usando um contador dentro de um if para caso a divisão desse número por todos os outros que o antecedem seja igual a 0, o contador conte 1;
	for (i = 1; i <= num; i++) {
	    if (num % i == 0) { 
	     cont++;
	    }
   }
	//sendo cont igual a dois, temos um número primo.
	if(cont == 2)
	  printf("%d e um numero primo",num);
	else
		printf("%d nao e um numero primo",num);
		
	return 0;
}

