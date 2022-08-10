#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	int m[100][100], linhas, cols, i, j;
	printf("Qtde de linhas e colunas:");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				if(i==j){
					printf("%d|",m[i][j]);
			}
				else
					printf("  |");
		}
		printf("\n");
	}
	return 0;
}
