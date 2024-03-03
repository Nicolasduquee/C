/* 06 - Criar em linguagem C e utilizando o
comando DO WHILE, que imprima a palavra FATEC
 o número de vezes que for digitado em um
intervalo de um segundo. */

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	printf("Imprimir palavra FATEC\n\n");
	
	int i;
	
	printf("Quantas vezes a palavra FATEC deve ser impressa:\n");
	scanf("%d", &i);
	
	do {
		printf("FATEC\n");
		Sleep(1000);
		i--;
	}
	while(i >= 1);
	
	system("pause");
}
