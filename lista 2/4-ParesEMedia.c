#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

int main(){
	int vetor[100], par=0, i, op, n; double aux=0.00;
	
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
		if(vetor[i]%2==0){
			par=par+vetor[i];
			aux++;
		}
	}
	mostraVetor(vetor,n);
		if(aux==0){
			printf("Nao ha numeros pares");
		}
		if(aux>0){
			aux=par/aux;
			printf("Media dos numeros pares: %.2lf",aux);
	}	
	return 0;
}
