#include <stdio.h>
#include <string.h>

int main(){
	char palavra[1000];
	int i, n;
	printf("Palavra codificada:");
	fflush(stdin);
	gets(palavra);
	n = strlen(palavra);
	printf("Tamanho da palavra:%d\n",n);
	for(i=0;i<n;i++){
		if(palavra[i]!='p')
		   printf("%c",palavra[i]);
		else
		  if(palavra[i-1]=='p' && palavra[i+1]=='p')
		    printf("%c",palavra[i]);    
	}// fim for
	
	return 0;
}
