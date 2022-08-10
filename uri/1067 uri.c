#include <stdio.h>

int main(){
	int num, i;
	
	scanf("%d",&num);
		if((num%2)==0){
			for(i=1;i<=num;i+=2){
				printf("%d\n",i);
			}
		}
			if((num%2)==1){
			for(i=1;i<=num;i+=2){
				printf("%d\n",i);
			}
		}
	
	return 0;
	
}
