#include <stdio.h>
#include "bibliotecaVetor.h"

int main(){
	int numeros[100], n, i, maior, menor, op;
	printf("Quantos elementos no vetor:");
	scanf("%d",&n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
	if(op==1)
		geraVetor(numeros,n);
	else
		leiaVetor(numeros,n);	
	mostraVetor(numeros,n);
	maior = numeros[0];
	menor = numeros[0];
	//printf("Maior Valor:%d\nMenor Valor:%d\n",maior,menor);//
	//getch();//
	for(i=1;i<n;i++){
		if(numeros[i]<menor)
		   menor = numeros[i];
		if(numeros[i]>maior)
		   maior = numeros[i];  
	//printf("[%d]-Maior Valor:%d\nMenor Valor:%d\n",i,maior,menor);//
	//getch();	//    
	}// fim for
	printf("Maior Valor:%d\nMenor Valor:%d\n",maior,menor);
	return 0;
}
