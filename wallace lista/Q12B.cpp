#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	//while repete a frase dentro dele até que o i seja igual a 500, a cada ciclo o i que começa em zero ganha mais um novo valor.
	int i = 0;
	while(i<=500){
		printf("“Eu não vou mais jogar aviõezinhos de papel na sala de aula. %d",i);
		i++;
	}
	
	return 0;
	

}
