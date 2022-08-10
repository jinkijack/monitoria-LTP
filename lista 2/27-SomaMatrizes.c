#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

int main(){
	int m1[100][100], m2[100][100], op, i, j, linhas, cols, soma;
	printf("Qtde de linhas e colunas da matriz A:");
	scanf("%d%d",&linhas,&cols);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
		if(op==1)
			geraMatriz(m1,linhas,cols);
		else
			leiaMatriz(m1,linhas,cols);
	printf("Qtde de linhas e colunas da matriz B:");
	scanf("%d%d",&linhas,&cols);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
		if(op==1)
			geraMatriz(m2,linhas,cols);
		else
			leiaMatriz(m2,linhas,cols);
	mostraMatriz(m1, linhas, cols);
	printf("---------------\n");
	mostraMatriz(m2, linhas, cols);
		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				soma=m1[i][j]+m2[i][j];
				printf("%d|",soma);
			}
	printf("\n");
	}
	return 0;
}

