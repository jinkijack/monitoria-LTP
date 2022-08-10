#include <stdio.h>

int main(){
	
	double num[6];
	int i,cont=0;
		for(i=0;i<6;i++){
			scanf("%lf",&num[i]);
				if(num[i]>0)
					cont++;
			
		}
	printf("%d valores positivos\n",cont);
	return 0;
}
