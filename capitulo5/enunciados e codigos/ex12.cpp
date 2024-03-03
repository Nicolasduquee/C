/* 12 - Criar em linguagem C e utilizando
o comando WHILE ou DO WHILE, um programa
que peca numeros ao usuario ate que a soma
de todos os numeros digitados for pelo menos 20.*/

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	int num, total;
	
	do{
		printf("\ntotal = %d\n", total);
		printf("\nDigite um valor:");
		scanf("%d", &num);
		
		total = total + num;
	}
	while(total < 20);
	printf("\ntotal final = %d", total);
	
	system("pause");
}
