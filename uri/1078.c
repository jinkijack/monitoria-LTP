#include <stdio.h>

int main(){
	int tabuada,i,resultado;
	scanf("%d",&tabuada);
		
			for(i=1; i<=10; i++){
				
					resultado = tabuada*i;
					
					printf("%d x %d = %d\n",i,tabuada,resultado);
			}
	return 0;
}
