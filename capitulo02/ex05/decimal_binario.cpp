/* 05 - criar um programa em linguagem C que converta
um numero decimal de 0 a 15 em numero binario.*/

#include<windows.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>

main(){
	system("cls");
	
	int dec, bin1, bin2, bin3, bin4;
		
	printf("Conversor de numero decimal para binario\n\n");
	printf("Digite um numero de base decimal entre 0 e 15 para ser convertido para binario\n");
	scanf("%d", &dec);
	
	bin1 = dec % 2;
	bin2 = (dec / 2) % 2;
	bin3 = ((dec / 2) / 2) % 2;
	bin4 =(((dec / 2) / 2) / 2) %2;
	
	printf("\n");
	printf("%d%d%d%d\n\n", bin4, bin3, bin2, bin1);
	
	system("pause");
}
