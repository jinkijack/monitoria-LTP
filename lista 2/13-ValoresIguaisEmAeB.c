#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

int main(){
	int a[100], b[100], op, n1, n2, x, i, j;
		
	printf("Quantos elementos no vetor A:");
	scanf("%d",&n1);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
		if(op==1){
			geraVetor(a, n1);
		}
		else
			leiaVetor(a, n1);
//-------------------------------------------- Fim Vetor 1
	printf("Quantos elementos no vetor 2:");
	scanf("%d",&n2);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
		if(op==1){
			geraVetor(b, n2);
		}
		else
			leiaVetor(b, n2);
//-------------------------------------------- Fim Vetor 2
	if(n1>n2){
		x=n1;
	}
	if(n2>n1){
		x=n2;
	}
	if(n1==n2){
		x=n1;
	}
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if(a[i]==b[j]){
				printf("%d|",a[j]);
			}
		}
	}
	return 0;
}
