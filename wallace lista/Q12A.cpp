#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	//usando um for que começa em 1 temos um for que vai escrever a frase até que o contador i chegue em 500.
	int i = 1;
	for(i;i <=500;i++){
		printf("“Eu não vou mais jogar aviõezinhos de papel na sala de aula. %d",i);
	}
	
	return 0;
	

}
