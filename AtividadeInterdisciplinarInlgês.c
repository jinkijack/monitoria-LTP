#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leiaMatriz(int m[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("M[%d][%d]:",i,j);
			scanf("%d",&m[i][j]);
		}// fim for j
	}// fim for i
	
}
//-------------------------
void geraMatriz(int m[][100], int linhas, int cols){
	int i, j;
	srand(time(NULL));
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			m[i][j] = rand()%50;
		}// fim for j
	}// fim for i
	
}
//------------------------
void mostraMatriz(int m[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("%3d |", m[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
}
//-----------------------

int main(){
	int m1[100][100], m2[100][100], m3[100][100], op, i, j, x, linhas, linhasB, cols, colsB, soma, aux=0;
	setlocale(LC_ALL, "Portuguese");
	printf("Number of rows and columns of matrix A:");
	scanf("%d%d",&linhas,&cols);
	printf("[1] Generate\n[2] Read\n");
	scanf("%d",&op);
		if(op==1)
			geraMatriz(m1,linhas,cols);
		else
			leiaMatriz(m1,linhas,cols);
	printf("Number of rows and columns of matrix B:");
	scanf("%d%d",&linhasB,&colsB);
	printf("[1] Generate\n[2] Read\n");
	scanf("%d",&op);
		if(op==1)
			geraMatriz(m2,linhasB,colsB);
		else
			leiaMatriz(m2,linhasB,colsB);
	mostraMatriz(m1, linhas, cols);
	printf("---------------\n");
	mostraMatriz(m2, linhasB, colsB);
	printf("---------------\n");
	printf("Which operation do you want to execute: \n");
	printf("[1] Sum\n[2] Subtraction\n[3] Multiplication\n");
	scanf("%d",&op);
		if(op==1){
			if(linhas&&linhas==linhasB&&colsB){
				for(i=0;i<linhas;i++){
					for(j=0;j<cols;j++){
						m3[i][j]=m1[i][j]+m2[i][j];
						}
					}
			printf("---------------\n");
			mostraMatriz(m3, linhas, cols);
			}
			else{
				printf("It is not possible to perform this operation (Number of different rows and columns)!");
			}
		}
		if(op==2){
			if(linhas&&linhas==linhasB&&colsB){
				for(i=0;i<linhas;i++){
					for(j=0;j<cols;j++){
						m3[i][j]=m1[i][j]-m2[i][j];
					}
				}
			printf("---------------\n");	
			mostraMatriz(m3, linhas, cols);
			}
			else{
				printf("It is not possible to perform this operation (Number of different rows and columns)!");
			}
		}
		if(op==3){
			if(cols==linhasB){
				for(i=0;i<linhas;i++){
					for(j=0;j<colsB;j++){
						m3[i][j]=0;
						for(x=0;x<linhasB;x++){
							aux+= m1[i][x]*m2[x][j];
					}
					m3[i][j]=aux;
					aux=0;
				}
			}
		printf("---------------\n");
		mostraMatriz(m3, linhasB, cols);
		}
		else{
			printf("It is not possible to perform this operation (Number of columns in matrix A different from the number of rows in matrix B)!");
		}
	}
	return 0;
}
