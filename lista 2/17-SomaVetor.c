#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

int main(){
	float nota[5], maior, menor, soma;
	int i;
	
	leiaVetorReal(nota, 5);
	maior = nota[0];
	menor = nota[0];
		for(i=1;i<5;i++){
			if(nota[i]<menor)
		   		menor = nota[i];
			if(nota[i]>maior)
		  		 maior = nota[i];
		}
		for(i=0;i<5;i++){
			soma+=nota[i];
	}
	soma=soma-(menor+maior);
	printf("%.1f\n",soma);
	return 0;
}
