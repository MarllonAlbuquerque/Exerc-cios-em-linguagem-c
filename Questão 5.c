#include <stdio.h>


struct conta 
{
	char nome[100];
	int chave;
	int senha;
	int numeroconta;
	int valor = 1500;	
};
struct conta conta;

int main(){
	
	int escolha,numteste,senhateste,saque,chaveteste,valorteste,i=0;
	char nometeste[100];
	char fim;
	
	printf("Digite seu primeiro nome : ");
	scanf("%s",&conta.nome);
	
	printf("Crie sua senha : ");
	scanf("%d",&conta.senha);
	senhateste = conta.senha;
	printf("Crie seu número da conta : ");
	scanf("%d",&conta.numeroconta);
	numteste = conta.numeroconta;
	printf("Crie seu número da chave : ");
	scanf("%d",&conta.chave);
	chaveteste = conta.chave;
	
	printf("Que acao deseja executar : \n");
	printf("[0] Parar | [2] Consultar saldo | [3] Deposito | [4] Saque | [5]Encerrar conta\n");
	scanf("%d",&escolha);
	
	switch(escolha){
			
        case 2 :
        	printf("\n-----Consulta-----\n");
			printf("Digite o número da conta : ");
			scanf("%d",&numteste);
			printf("Digite a senha : ");
			scanf("%d",&senhateste);
			if(senhateste == conta.senha){
				printf("Saldo : %d",conta.valor);
			}
			else{
				printf("Senha incorreta");
			}
		break;
			
		
		case 3 :
			printf("\n-----Deposito-----\n");
			printf("Digite o numero da conta : ");
			scanf("%d",&numteste);
			printf("Digite o seu primeiro nome : ");
			scanf("%s",&nometeste);
			if(nometeste == conta.nome){
				printf("Digite o valor desejado : ");
				scanf("%d",&valorteste);
				conta.valor = valorteste + conta.valor;
				printf("Concluido ! , saudo restante : R$: %d",conta.valor);
			}
			else{
				printf("ERRO\n");
			}
		break;
		
			
		
		case 4 :
			printf("\n-----Saque-----\n");
			printf("Digite o numero da conta : ");
			scanf("%d",&numteste);
			printf("Digite a senha : ");
			scanf("%d",&senhateste);
			printf("Digite a chave : ");
			scanf("%d",&chaveteste);
			if(chaveteste == conta.chave && senhateste == conta.senha){
				printf("Digite o valor de saque desejado : ");
				scanf("%d",&saque);
				printf("Valor restante : %d",conta.valor-saque);
			}
			else{
				printf("ERRO");
			}
		break;
		
		
		case 5 :
			printf("\n-----Encerramento-----\n");
			printf("Digite o numero da conta : ");
			scanf("%d",&numteste);
			printf("Digite a senha : ");
			scanf("%d",&senhateste);
			printf("Digite a chave : ");
			scanf("%d",&chaveteste);
			if(chaveteste == conta.chave && senhateste == conta.senha){
				printf("Tem certeza que deseja encerrar a conta ? S\N ");
				scanf("%S",&fim);
				getchar();
				if(fim == 'S' || fim == 's'){
					conta.chave = 0;
					for(int i = 0; conta.nome[i < 100];i++){
						conta.nome[i] = 0;
					}
					conta.numeroconta = 0;
					conta.senha = 0;
					conta.valor=0;
					printf("Encerrado");
				}
				else{
					printf("Encerramento cancelado !");
				}
			}
			else{
				printf("ERRO");
			}
		break;
			
		
			
		case 0:
		break;
		
		
		default:
			printf("Escolha invalida !");
		break;
	}
	
		return 0;
	}
		
		
			
		
		
			
		
			
			
			
	
	
	
	
	
