#include <stdio.h>
int main(){
	char opcao;  // Variável para receber a resposta do usuário
    int num1,num2,res;
// Loop
do{     //lendo os números do usuário
		printf("Digite primeiro numero : ");
		scanf("%d",&num1);
		
		printf("Digite o segundo numero : ");
		scanf("%d",&num2);
		//somando os dois números e printando.
		res = num1 + num2;
		printf("Resultado : %d\n",res);
		//perguntando se deve ou não continuar para quebrar o loop.
		printf("Novo Calculo (S/N)?\n");
        scanf("%s",&opcao);// Verificação do usuário

    }while(opcao == 's' || opcao == 'S');
}

	    

