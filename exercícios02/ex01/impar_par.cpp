/*Criar um programa em linguagem
C que identifique se o numero é
PAR ou IMPAR.*/

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
		int n;
		
		printf("Par ou impar\n\n");
		printf("Digite um valor:\n");
		scanf("%d", &n);
		
		if (n % 2 == 0){
			printf("O valor e par!\n\n");
		}
		
		else
		if (n % 2 == 1){
			printf("O valor e impar!\n\n");
		}
	
	system("pause");
}
