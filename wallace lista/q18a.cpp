#include <stdio.h>
int main(){
	int vetor[9];
	int i,cont=0;
	
	for(i=0;i<=9;i++){//ler 9 vezes os números digitados pelo usuário
		printf("Digite o %d numero: ",i);
		scanf("%d",&vetor[i]);//colocar eles dentro do vetor.
	}
	for(i=0;i<=9;i++){
		if(vetor[i]==3){//caso alguns dos números seja igual a 3 contar mais 1 no contador.
			cont++;//contador
	
		}
	}
	printf("%d",cont);//printando os resulatdos.
		
	return 0;
}
