/*03 - Criar em linguagem C e utilizando o
comando WHILE, um programa que imprima
as letras de A a Z em um intervalo de 
um décimo de segundo.*/
 
#include <stdio.h>
#include <windows.h>

main(){
	system("cls");
	
	printf("De A a Z\n\n");
	
	char i = 'A';
	
	while(i <= 'Z'){		
		printf("%c\n", i);
		i = i + 1;
		Sleep(100);
	}
	
	system("pause");
}
