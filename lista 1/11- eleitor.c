#include <stdio.h>

int main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
		if(idade<16){ 
			printf("Nao e eleitor\n");
		}
		else
			if(idade>=18&&idade<65){
				printf("eleitor obrigatorio\n");
			}
		else
			if(idade>=16||idade>65){
				printf("Eleitor facultativo\n");
			}
	return 0;
}
