#include <stdio.h>
#include "bibliotecaMatriz.h"
//-----------------------
void verificaNum(int m[] [100], int linhas, int cols, int num){
	int i, j, aux=0;
		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				if(m[i][j]==num){
					aux++;
			}
		}
	}
	printf("O numero [%d] existe [%d] vezes na matriz", num, aux);
}
//-----------------------
int main(){
	int m[100][100], linhas, cols, i, j, aux=0, num;
	printf("Qtde de linhas e colunas:");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	printf("Digite um valor para verificar quantas vezes ele existe na matriz: ");
	scanf("%d",&num);
	/*	for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				if(m[i][j]==num){
					aux++;
			}
		}
	}
	*/
	verificaNum(m,linhas,cols,num);
//	printf("O numero [%d] aparece na matriz [%d] vezes",num, aux);
	return 0;
}
