/* Criar um programa em linguagem
C que imprima o alfabeto de A a Z
com o intervalo de 0,5 segundos.

**exercicio feito com tabela ASCII */

#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	system("cls");
	
	printf("Alfabeto\n\n");
	
	int letra;
	
	for(letra = 65; letra <= 90; letra++){
		printf("%c\n", letra);
		Sleep(500);
	}
	
	system("pause");
}
