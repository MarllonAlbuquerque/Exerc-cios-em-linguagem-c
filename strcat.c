#include <stdio.h>

int main(){
	
	char str1[100];
	char str2[100];
	char concat[100];
	int i = 0;
	int j;
	
	printf("-----Concatenador de strings-----");
	
	printf("\nDigite sua primeira string : ");
	scanf("%[^\n]s",&str1);
	
	setbuf(stdin, NULL);
	
	printf("\nDigite sua segunda string : ");
	scanf("%[^\n]s",&str2);
	
	for(i=0; str1[i]!='\0'; ++i);{  

    for(j=0; str2[j]!='\0'; ++j, ++i) {
      str1[i]=str2[j];
   }

   str1[i]='\0';
 }
 
 printf(" %s ",str1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
