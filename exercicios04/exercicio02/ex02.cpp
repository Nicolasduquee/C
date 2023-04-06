/* Criar um programa em linguagem C
que imprima os números de 100 a 0 
com o intervalo de 0,5 segundos. */

#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

main()
{
	system("cls");
	
	int num;
	for(num = 100; num >= 0; num--){
		printf("%d\n", num);
		Sleep (500);
	}
	
	system("pause");
}
