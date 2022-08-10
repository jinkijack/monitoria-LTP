#include <stdio.h>

int main(){
	int p1,p2,p3;
	scanf("%d%d%d",&p1,&p2,&p3);
		if(p1>p2&&p1<p3){
			printf("%d\n",p1);
		}
		else
			if(p2>p1&&p2<p3){
				printf("%d\n",p2);
			}
		else
			if(p3>p2&&p3<p1){
				printf("%d",p3);
			}
		if(p1>p3&&p1<p2){
			printf("%d\n",p1);
		}
		else
			if(p2>p3&&p2<p1){
				printf("%d\n",p2);
			}
		else
			if(p3>p1&&p3<p2){
				printf("%d",p3);
			}
	return 0;
}
