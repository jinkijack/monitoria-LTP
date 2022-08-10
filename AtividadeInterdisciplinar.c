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
	printf("Qtde de linhas e colunas da matriz A:");
	scanf("%d%d",&linhas,&cols);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
		if(op==1)
			geraMatriz(m1,linhas,cols);
		else
			leiaMatriz(m1,linhas,cols);
	printf("Qtde de linhas e colunas da matriz B:");
	scanf("%d%d",&linhasB,&colsB);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
		if(op==1)
			geraMatriz(m2,linhasB,colsB);
		else
			leiaMatriz(m2,linhasB,colsB);
	mostraMatriz(m1, linhas, cols);
	printf("---------------\n");
	mostraMatriz(m2, linhasB, colsB);
	printf("---------------\n");
	printf("Qual opera��o deseja realizar: \n");
	printf("[1] Soma\n[2] Subtra��o\n[3] Multiplica��o\n");
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
				printf("N�o � poss�vel realizar essa opera��o(N�mero de linhas e colunas diferentes)!");
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
				printf("N�o � poss�vel realizar essa opera��o(N�mero de linhas e colunas diferentes)!");
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
			printf("N�o � poss�vel realizar essa opera��o(N�mero de colunas da matriz A diferente do n�mero de linhas da matriz B)!");
		}
	}
	return 0;
}
