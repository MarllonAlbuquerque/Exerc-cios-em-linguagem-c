#include <stdio.h>
int main(){
	int vetor[10];
	int i,cont=0,pes;
	//lendo todos os n�meros e colocando dentro do vetor
	for(i=0;i<=9;i++){
		printf("Digite o %d numero: ",i);
		scanf("%d",&vetor[i]);
	}
	//verificando qual n�mero deve ser procurado.
	printf("Que numero deseja pesquisar : ");
	scanf("%d",&pes);
	//comparando os n�meros do vetor com o n�mero dado pelo usu�rio.
	for(i=0;i<=9;i++){
		if(vetor[i] == pes){
			cont++;
		}
	}//printando o resultado.
	printf("%d",cont);
	return 0;
}
