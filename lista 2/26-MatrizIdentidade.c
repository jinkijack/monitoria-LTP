#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	int linhas, cols, i, j;
	printf("Qtde de linhas e colunas:");
	scanf("%d%d",&linhas,&cols);
		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				if(i==j){
					printf("1|");
			}
				else
					printf("0|");
		}
		printf("\n");
	}

	return 0;
}
