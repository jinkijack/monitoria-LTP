#include <stdio.h>

int main(){
	int num;
	printf("Digite o numero: ");
	scanf("%d",&num);
		if(num%2==0){
			printf("O numero e par\n");
		}
		else{
			printf("O numero e impar\n");
		}
	return 0;
}
