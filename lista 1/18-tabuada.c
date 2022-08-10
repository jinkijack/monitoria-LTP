#include <stdio.h>

int main(){
	int tabuada,resultado;
	int i=0;
	
		printf("Digite um numero para obter a tabuada: ");
		scanf("%d",&tabuada);
		
			for(i=0; i<=10; i++){
				
					resultado = tabuada*i;
					
					printf("%d X %d = %d\n",tabuada, i, resultado);
			}
	return 0;
			
}
