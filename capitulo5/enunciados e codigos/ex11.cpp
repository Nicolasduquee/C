/* 11 - Criar em linguagem C e utilizando o
comando WHILE e / ou DO WHILE
aninhado, um programa conforme
imagem abaixo. */

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	int l = 1, c = 1;
	
	while (l <= 4){
		
		c = 1;
		
		while(c <= 4){
			printf("%d ", l * c);
			c++;
		}
		
		printf("\n");
		l++;
	}
	
	system("pause");
}
