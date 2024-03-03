/*10 - Criar em linguagem C e utilizando o
comando WHILE e / ou DO WHILE
aninhado, um programa conforme
modelo.*/

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	int i, l = 8, k;
	
	while(i <= l){
		
		k = 1;
		
		while(k <= i){
			printf("*");
			Sleep(1000);
			k++;
		}
		
		printf("\n");
		i++;
	}
	system("pause");
}
