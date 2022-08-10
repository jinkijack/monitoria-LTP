#include <stdio.h>

int main(){
	double num1,num2; //pode ser inteiro ou não.
	printf("Digite os numeros: ");
	scanf("%lf%lf",&num1,&num2);
		if(num1>num2){
			printf("O Numero %.2lf e maior que o %.2lf\n",num1,num2);
		}
		else
			if(num2>num1){
				printf("O Numero %.2lf e maior que o %.2lf\n",num2,num1);
			}
		else
			printf("Os numeros sao iguais\n");
	return 0;
}
