/* 08 - Criar em linguagem C e utilizando o
comando DO WHILE, um programa
que identifique se um número é
PAR, IMPAR e 0 para sair. */

#include <windows.h>
#include <stdio.h>

main(){
	
	int n;
	
	do{
		system("cls");
		printf("Par ou Impar\n\n");
		printf("Digite um numero: ");
		scanf("%d", &n);
	
		if(n % 2 == 0){
			printf("\n%d e par!\n", n);
		}
		else{
			printf("\n%d e impar!\n", n);
		}
		
		system("pause");
	}
	while(n != 0);
}
