/*
Escreva um trecho de c�digo em C para fazer a cria��o dos novos tipos de dados conforme solicitado abaixo:

Hor�rio: composto de hora, minutos e segundos.

Data: composto de dia, m�s e ano.

Compromisso: composto de uma data, hor�rio e texto que descreve o compromisso.
*/
#include <stdio.h>

int main(){
	
struct horario{
	int hora;
	int minutos;
	int segundos;
};
struct horario horario;	

struct data{
	int dia;
	int mes;
	int ano;
};
struct data data;

struct compromisso{
	int data;
	int horario;
	char texto[200];
};
struct compromisso compromisso;
		
}
