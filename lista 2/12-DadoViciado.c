#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

int main(){
	int vetor[100], i, n, x[6]={0,0,0,0,0,0};
	printf("Quantos elementos no vetor A:");
	scanf("%d",&n);
	leiaVetor(vetor, n);
		for(i=0;i<n;i++){
			if(vetor[i]==1){
				x[0]++;
			}
			if(vetor[i]==2){
				x[1]++;
			}
			if(vetor[i]==3){
				x[2]++;
			}
			if(vetor[i]==4){
				x[3]++;
			}
			if(vetor[i]==5){
				x[4]++;
			}
			if(vetor[i]==6){
				x[5]++;
			}
		}
//		mostraVetor(x, 6);
		for(i=0;i<6;i++){
			printf("A face [%d] aparece [%d] vezes\n", i+1, x[i]);	
	}
	return 0;
}
