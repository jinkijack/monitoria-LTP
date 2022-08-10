#include <stdio.h>

int main(){
	double dolar, real, convertido;
	printf("Digite a cotacao atual do dolar: ");
	scanf("%lf",&dolar);
	printf("Digite o valor em reais para converter: ");
	scanf("%lf",&real);
	convertido=real/dolar;
	printf("O valor convertido em dolar: %.2lf\n",convertido);
	
	return 0;
}
