#include <stdio.h>
int main(){
	int vetor[9];
	int i,maior,menor;
	//for para ler todos os números e colocar todos eles dentro do vetor.
	for(i=0;i<=9;i++){
		printf("Digite o %d numero: ",i+1);
		scanf("%d",&vetor[i]);
	}
	for(i=0;i<=9;i++){//for para correr todos os indices do vetor.
		if(i==0){maior=vetor[i];menor=vetor[i];}
		
		if(vetor[i] > maior){//caso o número digitado seja maior.
			maior = vetor[i];
		}
		else if (vetor[i] < menor){//caso o número digitado seja menor.
			menor = vetor[i];
		}	
	}
	//printado os resultados depois de comparar todos os números.	
	printf("Maior : %d\n",maior);
	printf("Menor : %d",menor);
	return 0;
}
