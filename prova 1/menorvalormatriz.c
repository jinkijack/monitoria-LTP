#include <stdio.h>

void verificaNum(int m[] [100], int linhas, int cols, int num){
	int i, j, aux=0;
		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				if(m[i][j]==num){
					printf("Menor[%d][%d]=%d",i,j,num);
					aux++;
			}
		}
		if(aux!=0){
			break;
		}
	}
}

int main(){
	int numeros[100][100], i, j, menor, linhas, cols;
	
	scanf("%d",&linhas);
	cols=linhas;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&numeros[i][j]);
		}// fim for j
	}// fim for i
	menor = numeros[0][0];
	for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				if(numeros[i][j]<menor)
		  		 	menor = numeros[i][j];
		}
	}
	verificaNum(numeros, linhas, cols, menor);
}
