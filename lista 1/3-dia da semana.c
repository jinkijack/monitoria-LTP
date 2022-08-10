#include <stdio.h>

int main(){
	int dia;
	
	printf("Digite o numero do dia da semana: ");
	scanf("%d",&dia);
		switch(dia){
			case 1:
				printf("Hoje e domingo!!\n");
				break;
			case 2:
				printf("Hoje e segunda-feira\n");
				break;
			case 3:
				printf("Hoje e terça-feira\n");
				break;
			case 4:
				printf("Hoje e quarta-feira\n");
				break;
			case 5:
				printf("Hoje e quinta-feira\n");
				break;
			case 6:
				printf("Hoje e sexta-feira\n");
				break;
			case 7:
				printf("Hoje e sabado\n");
				break;	
		}
	return 0;
}
