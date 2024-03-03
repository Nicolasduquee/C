/*04 - Criar em linguagem C e utilizando o
comando WHILE, um programa que
imprima as letras de Z a A em um
intervalo de um décimo de segundo.*/

#include <windows.h>
#include <stdio.h>

main (){
	system("cls");
	
	printf("Imprimir letras de Z a A\n\n");
	
	char i = 'Z';
	
	while(i >= 'A'){
		printf("%c\n", i);
		i--;
		Sleep(100);
	}
	
	
	system("pause");
}
