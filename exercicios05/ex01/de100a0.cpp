/*01 - Criar em linguagem C e utilizando o comando WHILE,
um programa que imprima na tela os números de 100 a 0
 em um intervalo de um décimo de segundo*/
 
#include <stdio.h>
#include <windows.h>

main(){
	system("cls");
	
	printf("De 100 a 0\n\n");
	
	int num = 100;
	
	while(num >= 0){		
		printf("%d\n", num);
		num = num - 1;
		Sleep(100);
	}
	
	system("pause");
}
