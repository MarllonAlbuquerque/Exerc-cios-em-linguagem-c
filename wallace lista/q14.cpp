#include <stdio.h>
int main(){
	char opcao;  // Vari�vel para receber a resposta do usu�rio
    int num1,num2,res;
// Loop
do{     //lendo os n�meros do usu�rio
		printf("Digite primeiro numero : ");
		scanf("%d",&num1);
		
		printf("Digite o segundo numero : ");
		scanf("%d",&num2);
		//somando os dois n�meros e printando.
		res = num1 + num2;
		printf("Resultado : %d\n",res);
		//perguntando se deve ou n�o continuar para quebrar o loop.
		printf("Novo Calculo (S/N)?\n");
        scanf("%s",&opcao);// Verifica��o do usu�rio

    }while(opcao == 's' || opcao == 'S');
}

	    

