/*
Escreva um trecho de código em C para fazer a criação dos novos tipos de dados conforme solicitado abaixo:

Horário: composto de hora, minutos e segundos.

Data: composto de dia, mês e ano.

Compromisso: composto de uma data, horário e texto que descreve o compromisso.
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
