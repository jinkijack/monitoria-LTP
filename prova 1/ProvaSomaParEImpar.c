#include <stdio.h>

int main(){
	int numeros[100], par=0, impar=0, somapar, somaimpar, n, i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	   scanf("%d",&numeros[i]);
	}// fim for
		for(i=0;i<n;i++){
			if(numeros[i]%2==1){
				somaimpar+=numeros[i];
				impar++;
			}
			else if(numeros[i]%2==0){
				somapar+=numeros[i];
				par++;
		}
	}
	printf("Soma pares:%d - Qtde pares:%d",somapar,par);
	printf("Soma impares:%d - Qtde impares:%d",somaimpar,impar);
	return 0;
}
	
