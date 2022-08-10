#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotecaVetor.h"

int main(){
	char a[100]; int i, x;

	printf("Digite o Vetor (maximo 100 posicoes): ");
	fflush(stdin); 
	gets(a);
	x=strlen(a);
	printf("Tamanho do vetor: %d\n",x);
		for(i=x;i>=0;i--){
			if(a[i]!='\0'){
				printf("%c|",a[i]);
		}
	}
	return 0;
}
	
