#include <stdio.h>

int main(){
	float massa;
	int seg=0;
	
	printf("Digite a massa do material: ");
	scanf("%f",&massa);
		while(massa>=1.45){
			massa= massa - (massa*0.13);
			seg+=20;
			printf("Passaso %d seg a massa e de %.2f\n",seg,massa);
			_sleep(500);
	}
	printf("Foram necessarios %d seg para a massa decair\n",seg);
	
	return 0;
}
