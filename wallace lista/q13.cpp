#include <stdio.h>

int main () {
	
	int i;
	
	printf ("Teclar enter para exibir os numeros de 32 a 126: ");
	getchar ();
	//o for vai contando os n�meros desde o 32, e a cada ciclo � escrito com diferentes m�scaras o mesmo n�mero.
	for (i = 32; i <= 126; i++) {
			printf ("%i ", i); //inteiro
		    printf ("%x ", i);//hexadecimal
		    printf("%c ",i);//caracter
		    printf("\n");//Para pular a linha
	}
			
			
	return 0;
}
