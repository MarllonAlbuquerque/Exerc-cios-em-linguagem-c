#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char escolha;
	int primeiro, segundo,res;
	
	//4 opera��es b�sicas: soma, subtra��o, divis�o e multiplica��o. O programa deve perguntar
    //ao usu�rio qual opera��o ele quer realizar, a resposta do usu�rio dever� ser um caractere,
    //'+' se soma, '-' se subtra��o, '*' se multiplica��o, e '/' se divis�o.
	printf("Qual opera��o deseja realizar :\n");
	printf("+ soma | - subtra��o | * mutiplica��o | / divis�o\n");
	printf("Escolha : ");
	scanf("%c",&escolha);
	//Em seguida o programa
    //deve pedir para o usu�rio digitar o primeiro n�mero e depois o segundo.
	printf("Digite o primeiro n�mero : ");
	scanf("%d",&primeiro);
	printf("Digite o segundo n�mero : ");
	scanf("%d",&segundo);
	//Como sa�da o programa deve exibir o resultado da opera��o realizada
	if(escolha == '+'){
		res = primeiro + segundo;
		printf("Resultado da soma : %d",res);
	}
	else if(escolha=='-'){
		res = primeiro - segundo;
		printf("Resultado da subtra��o : %d",res);
	}
	else if(escolha=='*'){
		res = primeiro * segundo;
		printf("Resultado da mutiplica��o : %d",res);
	}
	else if(escolha=='/'){
		res = primeiro / segundo;
		printf("Resultado da divis�o : %d",res);
	}
	
	return 0;
	

}
