/* Criar um programa em linguagem
C que imprima o alfabeto de Z a A
com o intervalo de 0,5 segundos. */


#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	system("cls");
	
	printf("Alfabeto decrescente\n\n");
	
	int letra;
	
	for(letra = 90; letra >= 65; letra--){
		printf("%c\n", letra);
		Sleep(500);
	}
	
	system("pause");
}
