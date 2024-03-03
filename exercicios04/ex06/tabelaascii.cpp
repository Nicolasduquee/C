/* imprima a tabela ASCII
utilizando o comando FOR.

**exercicio feito com tabela ASCII */

#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	system("cls");
	
	printf("Tabela ASCII\n\n");
	
	int chr;
	
	for(chr = 0; chr <= 255; chr++){
		printf("%c\n", chr);
	//	Sleep(500);
	}
	
	system("pause");
}
