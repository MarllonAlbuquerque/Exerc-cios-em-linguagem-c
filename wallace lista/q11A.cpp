#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char escolha;
	int primeiro, segundo,res;
	
	//4 operações básicas: soma, subtração, divisão e multiplicação. O programa deve perguntar
    //ao usuário qual operação ele quer realizar, a resposta do usuário deverá ser um caractere,
    //'+' se soma, '-' se subtração, '*' se multiplicação, e '/' se divisão.
	printf("Qual operação deseja realizar :\n");
	printf("+ soma | - subtração | * mutiplicação | / divisão\n");
	printf("Escolha : ");
	scanf("%c",&escolha);
	//Em seguida o programa
    //deve pedir para o usuário digitar o primeiro número e depois o segundo.
	printf("Digite o primeiro número : ");
	scanf("%d",&primeiro);
	printf("Digite o segundo número : ");
	scanf("%d",&segundo);
	//Como saída o programa deve exibir o resultado da operação realizada
	if(escolha == '+'){
		res = primeiro + segundo;
		printf("Resultado da soma : %d",res);
	}
	else if(escolha=='-'){
		res = primeiro - segundo;
		printf("Resultado da subtração : %d",res);
	}
	else if(escolha=='*'){
		res = primeiro * segundo;
		printf("Resultado da mutiplicação : %d",res);
	}
	else if(escolha=='/'){
		res = primeiro / segundo;
		printf("Resultado da divisão : %d",res);
	}
	
	return 0;
	

}
