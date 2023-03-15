// 03 - Criar um programa em linguagem C que converta sua idade em
//meses, semanas, dias, horas,minutos e segundos.

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	int anos, meses, semanas, dias, horas, minutos, segundos;
	
	printf("Conversor de idade\n");
	printf("Digite sua idade:\n");
	scanf("%d", &anos);
	
	meses = anos * 12;
	semanas = meses * 4;
	dias = anos * 365;
	horas = dias * 24;
	minutos = horas * 60;
	segundos = minutos * 60;
	
	printf("\n");
	printf("Idade em:\n");
	printf("Anos:%d\n", anos);
	printf("Meses:%d\n", meses);
	printf("Semanas:%d\n", semanas);
	printf("Dias:%d\n", dias);
	printf("Horas:%d\n", horas);
	printf("Minutos:%d\n", minutos);
	printf("Segundos:%d\n\n", segundos);
	
	system("pause");
}
