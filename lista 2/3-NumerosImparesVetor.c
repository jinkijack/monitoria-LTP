#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

int main(){
	int vetor[100], impar=0, i, op, n;
	
	printf("Quantos elementos no vetor:");
	scanf("%d",&n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
		if(op==1){
			geraVetor(vetor, n);
		}
		else
			leiaVetor(vetor, n);
				
	for(i=0;i<n;i++){
		if(vetor[i]%2==1){
			impar++;
		}
	}		
	mostraVetor(vetor,n);
	printf("Quantidade de numeros impares: %d\n",impar);
	return 0;		
}
