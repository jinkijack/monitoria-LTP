#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

int main(){
	int vetor1[100], i, n1, n2, n3, j, vetor2[100], vetor3[100], aux=0, op;
	
	printf("Quantos elementos no vetor 1:");
	scanf("%d",&n1);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
		if(op==1){
			geraVetor(vetor1, n1);
		}
		else
			leiaVetor(vetor1, n1);
//-------------------------------------------- Fim Vetor 1
	printf("Quantos elementos no vetor 2:");
	scanf("%d",&n2);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
		if(op==1){
			geraVetor(vetor2, n2);
		}
		else
			leiaVetor(vetor2, n2);
//-------------------------------------------- Fim Vetor 2
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(i==j){
				vetor3[aux]=vetor1[i]*vetor2[j];
				aux++;
			}
		}
	}
//-------------------------------------------- Fim For multiplicação

//	mostraVetor(vetor1,n1);
//	mostraVetor(vetor2,n2);
	mostraVetor(vetor3,aux);
	return 0;
}
