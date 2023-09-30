#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void){
	int resp;
	printf("digite \n");
	printf("1 para abrir a calculadora \n");
	printf("2 para abrir o bloco de notas \n");
	printf("3 para fazer um backup \n");
	printf("resposta: ");
	scanf("%d",&resp);
	
	while(resp !=1 && resp!=2 && resp!=3){
	printf("resposta invalida \n");
	printf("\n");
	printf("digite \n");
	printf("1 para abrir a calculadora \n");
	printf("2 para abrir o bloco de notas \n");
	printf("3 para fazer um backup \n");
	printf("resposta: ");
	scanf("%d",&resp);
	}
	
	if(resp==1){
		system("start calc.exe");
	}else if(resp==2){
		system("start notepad.exe");
	}else if(resp==3){
		system("start bkcp.bat");
	}
}