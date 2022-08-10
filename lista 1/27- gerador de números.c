#include <stdio.h>
#include <stdlib.h>

int main(){
	int aleatorio, numero, cont=0;
	srand(time(NULL)); // gerador de números
	aleatorio = rand()%20;
	
	do{
		printf("Numero da sorte: ");
		scanf("%d",&numero);
		cont++;
			
	} while(numero!=aleatorio);
	
	printf("Foram necessarias %d tentativas!\n",cont);

	return 0;	
}
