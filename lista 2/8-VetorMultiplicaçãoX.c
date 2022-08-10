#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

int main(){
	int a[100], i, op, n, x, b[100];
	
	printf("Quantos elementos no vetor A:");
	scanf("%d",&n);
	leiaVetor(a, n);
//-------------------------------------------- Fim Vetor A
	printf("Digite o valor de X: ");
	scanf("%d",&x);
		for(i=0;i<n;i++){
			b[i]=a[i]*x;
		}
//	mostraVetor(a,n);
	mostraVetor(b, n);
	return 0;
}
