#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

int main(){
	int numeros[100], n, i,num,aux=0;
	printf("Quantos elementos no vetor:");
	scanf("%d",&n);
//	geraVetor(numeros, n);
	leiaVetor(numeros, n);
	printf("Digite um numero para verificar se ele existe no vetor: ");
	scanf("%d",&num);
		for(i=0;i<n;i++){
			if(numeros[i]==num){
				aux++;
			}
		}
	mostraVetor(numeros,n);
	if(aux==0){
			printf("Esse numero nao existe nesse vetor!\n");
		}
	if(aux!=0){
		printf("O numero [%d] apareceu [%d] nesse vetor",num,aux);
	}
	return 0;
}
