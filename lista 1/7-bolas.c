#include <stdio.h>

int main(){
	int bolaV=10, bolaA=5, bolaB=3,nV,nA,nB,pontos,i;
	printf("Digite a quantidade de bolas verdes: ");
	scanf("%d",&nV);
	printf("Digite a quantidade de bolas amarelas: ");
	scanf("%d",&nA);
	printf("Digite a quantidade de bolas brancas: ");
	scanf("%d",&nB);
		if(nV>0){
			for(i=0;i<nV;i++){
				pontos+=bolaV;
			}
		}
			if(nA>0){
				for(i=0;i<nA;i++){
					pontos+=bolaA;
				}
			}
			if(nB>0){
				for(i=0;i<nB;i++){
					pontos+=bolaB;
				}
			}
	printf("A pontuacao final: %d\n",pontos);
	return 0;
}
