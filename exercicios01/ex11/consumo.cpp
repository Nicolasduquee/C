/*Criar um programa em linguagem C um programa
que Calcule o consumo de um ve�culo conforme
os dados informado no teclado:
Tempo em horas, velocidade m�dia e dist�ncia*/

#include<windows.h>
#include<stdio.h>

main(){
	system("cls");
	
	float t, velMed, d, c;
	
	printf("Calculo de consumo\n\n");
	printf("Digite o tempo em horas e a velocidade m�dia em km/h:\n");
	scanf("%f%f", &t, &velMed);
	
	d = t * velMed;
	
	c = d * 15;
	
	printf("\n");
	printf("A %.2f km/h, por %.2f horas, a dist�ncia percorrida ser�:\n\n", velMed, t);
	printf("%.2f km\n\n", d);
	printf("Considerando que o carro consome 15L/km, o consumo total ser�:\n");
	printf("%.2f L\n\n", c);
	
	system("pause");
}
