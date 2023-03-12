/*Criar um programa em linguagem
C que faça a conversão de 4 bits
( NIBLE ) em um numero decimal.*/

#include <conio.h>
#include <windows.h>
#include <stdio.h>

main (){
	system("cls");
	
	printf("Conversor binario para decimal\n\n");
	
	int b1, b2, b3, b4, e1, e2, e3, e4, dec;
	
	printf("Digite o primeiro bit:\n");
	scanf("%d", &b1);
	printf("Digite o segundo bit:\n");
	scanf("%d", &b2);
	printf("Digite o terceiro bit:\n");
	scanf("%d", &b3);
	printf("Digite o quarto bit:\n");
	scanf("%d", &b4);
	
	e1 = 1 * b4;
	e2 = 2 * b3;
	e3 = 4 * b2;
	e4 = 8 * b1;
	dec = e1 + e2 + e3 + e4;
	
	printf("Esses 4 bits convirtidos para base decimal sao: %d\n\n", dec);
	
	system("pause");
}
