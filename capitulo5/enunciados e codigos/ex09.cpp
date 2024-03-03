/*09 - Criar em linguagem C e utilizando
o comando SWITCH, um programa
que identifique se um número é
PAR ou IMPAR e 0 para sair.*/

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	int num, resto;
	
	printf("Impar ou Par\n\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	resto = num % 2;
	
	switch(resto){
		case 0:
			{
				printf("\n%d e par!\n", num);
				Sleep(1000);
				break;
			}
			
		case 1:
			{
				printf("\n%d e Impar!\n", num);
				Sleep(1000);
				break;
			}	
	}
	
	system("pause");
}
