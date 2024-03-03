/*02 - Criar em linguagem C e utilizando o comando WHILE,
um programa que imprima na tela os números de 0 a 100
 em um intervalo de um décimo de segundo*/
 
#include <stdio.h>
#include <windows.h>

main(){
	system("cls");
	
	printf("De 0 a 100\n\n");
	
	int num = 0;
	
	while(num <= 100){		
		printf("%d\n", num);
		num = num + 1;
		Sleep(100);
	}
	
	system("pause");
}
