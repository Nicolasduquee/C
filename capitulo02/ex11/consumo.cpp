/* 11 - Criar um programa em linguagem C um programa
que Calcule o consumo de um veículo conforme
os dados informado no teclado:
Tempo em horas, velocidade média e distância*/

#include<windows.h>
#include<stdio.h>

main(){
	system("cls");
	
	float t, velMed, d, c;
	
	printf("Calculo de consumo\n\n");
	printf("Digite o tempo em horas e a velocidade mwdia em km/h:\n");
	scanf("%f%f", &t, &velMed);
	
	d = t * velMed;
	
	c = d * 15;
	
	printf("\n");
	printf("A %.2f km/h, por %.2f horas, a distancia percorrida sera:\n\n", velMed, t);
	printf("%.2f km\n\n", d);
	printf("Considerando que o carro consome 15L/km, o consumo total sera:\n");
	printf("%.2f L\n\n", c);
	
	system("pause");
}
