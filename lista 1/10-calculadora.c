#include <stdio.h>

int main(){
	double num1,num2,resultado;
	char operador;
	printf("Digite o primeiro valor: ");
	scanf("%lf",&num1);
	printf("Digite o operador(Exemplos: - + * /): ");
	scanf("%s",&operador);
	printf("Digite o segundo valor: ");
	scanf("%lf",&num2);
		if(operador=='/'){
			resultado=num1/num2;
		}
		else
		if(operador=='*'){
			resultado=num1*num2;
		}
		else
		if(operador=='+'){
			resultado=num1+num2;
		}
		else
		if(operador=='-'){
			resultado=num1-num2;
		}
		printf("Resultado: %.2lf\n",resultado);
		return  0;
}
