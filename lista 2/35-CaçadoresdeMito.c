#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	int m[100][100], i, j, x, y, raios, cont=0;
	// zerar a matriz
	for(i=0;i<100;i++)
	  for(j=0;j<100;j++)
	    m[i][j]=0;
	
	printf("Qtde de raios:");
	scanf("%d",&raios);
	for(i=1;i<=raios;i++){
		printf("Coordenadas do raio %d:",i);
		scanf("%d%d",&x,&y);
		m[x][y]+=1;
	}
	mostraMatriz(m,10,10); 
	for(i=0;i<100;i++)
	  for(j=0;j<100;j++)
	    if(m[i][j]>1)
	      cont++;
	printf("Qtde de raios que cairam no mesmo lugar:%d\n",cont);      
	return 0;
}
