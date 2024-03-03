/*05 - Criar em linguagem C utilizando o
comando WHILE, um programa que imprima
uma palavra infinitamente, até que uma 
tecla seja pressionada.*/
 
#include <stdio.h>
#include <windows.h>
#include <conio.h>

main(){
	system("cls");
	
	printf("Imprimir uma palavra infinitamente\n\n");
	
	char i[100];
	
	printf("Digite uma palavra: ");
	scanf("%s", &i);
	
	while(!kbhit())		
		printf("%s\n", i);	
		system("pause");
}
