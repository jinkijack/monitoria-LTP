#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	int m[100][100], linhas, cols, i, j, soma;
	printf("Qtde de linhas e colunas:");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				if((i+j)==(cols-1)){
					printf("%d|",m[i][j]);
					soma+=m[i][j];
			}
				else
					printf("  |");
		}
		printf("\n");
	}
	printf("A soma da diagonal secundaria: %d", soma);
	return 0;
}
