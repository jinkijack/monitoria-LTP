#include <stdio.h>
#include <math.h>

int main(){
	double num, raiz, quadrado;
	printf("Digite um numero: ");
	scanf("%lf",&num);
		if(num>0){
			raiz = sqrt(num);
			quadrado = pow(num,2);
			printf("O numero %.2lf ao quadrado: %.2lf e sua raiz quadrada: %.2lf\n",num,quadrado,raiz);
	}
	return 0;
}
