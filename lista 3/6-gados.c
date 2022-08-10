#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

typedef struct n{
	char mes[20];
	int ano;
	
}tNascimento;

typedef struct{
	char codigo[15],abate[1];
	float leite,alim;
	struct n dataNasc;
	
}tGado;

int anoAtual=2020;
int qtd=0;
//--------------------------------------------------
void salvaArquivoBinario(tGado g[]){
	FILE *arq;
	int i=0;
	arq=fopen("gados.txt","wb");
	fwrite(&g[i],sizeof(tGado),qtd,arq);
	printf("Dados Salvos com sucesso\n");
	fclose(arq);
	
}
//-----------------------------------------------------
void carregaBinario(tGado g[]){
	FILE*arq;
	arq=fopen("gados.txt","rb");
		if(arq==NULL){
			printf("Arquivo nao encontrado!\n");
			return;
		}
		while(fread(&g[qtd],sizeof(tGado),1,arq) >0 )
			qtd++;
		printf("Dados carregados com sucesso!");
		fclose(arq);
		
}
//--------------------------------------------------------
void cadastra(tGado g[]){
	printf("\n*** Cadastro de cabeças de gado ***\n");
	printf("Código da cabeça de gado: ");
	fflush(stdin); gets(g[qtd].codigo);
	printf("N° de litros de leite por semana: ");
	scanf("%f",&g[qtd].leite);
	printf("Quantidade de alimento por semana (kg): ");
	scanf("%f",&g[qtd].alim);
	printf("---Data de nascimento---\n");
	printf("Mês(extenso): ");
	fflush(stdin); gets(g[qtd].dataNasc.mes);
	printf("Ano: ");
	scanf("%d",&g[qtd].dataNasc.ano);
	
	int idade=anoAtual-g[qtd].dataNasc.ano;
	
		if(idade > 5 || g[qtd].leite < 40){
			g[qtd].abate[0]='s';
		}else{
			g[qtd].abate[0]='n';
		}
	printf("Abate: %s",g[qtd].abate);
	qtd++;
}
//-------------------------------------------------------
float producaoTotal(tGado gados[]){
	int i;
	float total=0;
		for(i=0;i<qtd;i++){
			total+=gados[i].leite;
		}
		return total;
}
//-----------------------------------------------------------
float consumoTotal(tGado gados[]){
	int i;
	float total=0;
		for(i=0;i<qtd;i++){
			total+=gados[i].alim;
		}
		return total;
}
//---------------------------------------------------------------
void listarAbates(tGado gados[]){
	int i, flag=0;
	for(i=0;i<qtd;i++){
		if(strcmp(gados[i].abate,"s")==0){
			flag=1;
			printf("*** Gado %d ***\n",i+1);
			printf("Código: %s\n",gados[i].codigo);
		}
	}
	if(flag==0){
		printf("Não há gados cadastrados para o abate!\n");
	}
}
//------------------------------------------------------------
void mostrarCadastros(tGado gados[]){
	int i,flag;
	printf("\n--- Há %d gados cadastrados ---\n\n",qtd);
		for(i=0;i<qtd;i++){
			printf("\n*** Gado %d ***",i+1);
			printf("Código: %s\n",gados[i].codigo);
			printf("N° de litros de leite por semana: %.1f\n",gados[i].leite);
			printf("Quantidade de alimento por semana (kg): %.1f\n",gados[i].alim);
			printf("Data de nascimento %s/%d\n",gados[i].dataNasc.mes,gados[i].dataNasc.ano);
		}
		if(flag == 0){
			printf("Não há gados cadastrados!\n");
		}
}
//-------------------------------------------------------------
int menu(){
	int op;
	printf("*** Controle de cabeças de gado ***\n");
	printf("1-Cadastrar gado\n");
	printf("2-Leite produzido por semana\n");
	printf("3-Alimento consumido por semana\n");
	printf("4-listar gados para o abate\n");
	printf("5-Gados cadastrados\n");
	printf("6-Salvar em arquivo\n");
	printf("7-Carregar arquivo\n");
	printf("0-Sair\n\n");
	scanf("%d",&op);
	return op;
	
}
//--------------------------------------------------------------
int main(){
	setlocale(LC_ALL, "Portuguese");
	tGado gados[100];
	int op;
	do{
		op=menu();
		switch(op){
			case 1:
				cadastra(gados);
				break;
			case 2:
				printf("%.1f litros por semana\n",producaoTotal(gados));
				break;
			case 3:
				printf("\n%.1fKG por semana\n",consumoTotal(gados));
				break;
			case 4:
				listarAbates(gados);
				break;
			case 5:
				mostrarCadastros(gados);
				break;
			case 6:
				salvaArquivoBinario(gados);
				break;
			case 7:
				carregaBinario(gados);
			case 0:
				printf("Saindo....");
				break;
		}
		getch();
		system("cls");
	}while(op!=0);
	return 0;
}
