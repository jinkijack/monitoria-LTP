#include <stdio.h>

int main(){
	double mb, kb;
	
	printf("Digite uma numero em Mbps para convertelo em Kbps: ");
	scanf("%lf",&mb);
	kb=mb*1000;
	printf("O valor em Kbps: %.2lf \n",kb);
	
	getch();
	return 0;
	
	
}
