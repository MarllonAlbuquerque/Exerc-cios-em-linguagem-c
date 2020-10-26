#include <stdio.h>


	
	/*Uma empresa comercial possui um programa para controle das receitas e despesas em seus 10 projetos. Os projetos são numerados de 0 até 9.
 Faça um programa C que controle a entrada e saída de recursos dos projetos. O programa deverá ler um conjunto de informações contendo: Número do projeto,
 valor, tipo despesa ("R" - Receita e "D" - Despesa). O programa termina quando o valor do código do projeto for igual a -1.
 . Ao final do programa, imprimir o saldo final de cada projeto.
Dica: Usar uma estrutura do tipo vetor para controlar os saldos dos projetos. Usar o conceito de struct para agrupar as informações lidas.


receitas e despesa
10 projetos = 0 a 9
controle a entrada e saída de recursos dos projetos
ler um conjunto de informações contendo
Número do projeto,valor, tipo despesa ("R" - Receita e "D" - Despesa
O programa termina quando o valor do código do projeto for igual a -1
Sabe-se que Receita deve ser somada ao saldo do projeto e despesa subtraída do saldo do projeto
Ao final do programa, imprimir o saldo final de cada projeto.

*/
typedef struct {
    char tipo;
    int valor;
} projeto;
projeto proj[9];


int main(){

int i=0;

for(i=0; i<10; i++) {
    proj[i].valor = 0;
    proj[i].tipo = ' ';
}

for(i=0; i<10; i++) {
    printf(" Digite o valor: ");
    scanf("%d", &proj[i].valor);
    printf(" Digite o tipo da despesa R\N : ");
    scanf("%c", &proj[i].tipo);
    getchar();
}

for(i=0; i<10; i++) {
    printf(" \n O projeto %d ",i);
    printf(" \n Saudo final: %d", proj[i].valor);
}



return 0;
}
