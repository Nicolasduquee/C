/* 07 - Criar em linguagem C e utilizando 
o comando DO WHILE, um programa que imprima
uma contagem regressiva do numero que você digitar. */

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	printf("Contagem regressiva\n\n");
	
	int num;
	
	printf("Digite um numero para a contagem regressiva:\n");
	scanf("%d", &num);
	
	do {
		printf("%d\n", num);
		Sleep(500);
		num--;
	}
	while(num >= 0);
	
	system("pause");
}
