#include <stdio.h>

int main(){
	int num,i;
	printf("Digite um valor: \n");
	scanf("%d",&num);
		for(i=1;num>1;num--){
			i=i*num;
		}
	printf("%d\n",i);
	return 0;		
}
