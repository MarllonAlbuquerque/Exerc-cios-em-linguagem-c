#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	//while repete a frase dentro dele at� que o i seja igual a 500, a cada ciclo o i que come�a em zero ganha mais um novo valor.
	int i = 0;
	while(i<=500){
		printf("�Eu n�o vou mais jogar avi�ezinhos de papel na sala de aula. %d",i);
		i++;
	}
	
	return 0;
	

}
