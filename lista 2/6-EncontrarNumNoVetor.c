#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

int main(){
	int numeros[100], n, i,num,aux=0;
	printf("Quantos elementos no vetor:");
	scanf("%d",&n);
	geraVetor(numeros,n);
	printf("Digite um numero para verificar se ele existe no vetor: ");
	scanf("%d",&num);
		for(i=0;i<n;i++){
			if(numeros[i]==num){
				printf("O numero [%d] foi encontrado nesse vetor na posicao %d\n",num,i);
				aux++;
			}
		}
		if(aux==0){
			printf("Esse numero nao existe nesse vetor!\n");
		}
	mostraVetor(numeros,n);
	return 0;
}
