//Criar um programa em linguagem C que calcule o perímetro e a área
//de uma circunferência de raio R(fornecido pelo usuário).

#include<windows.h>
#include<stdio.h>
#include<math.h>

main(){
	system("cls");
	
	float r, p, a;
	
	printf("Perimetro e area de um circulo\n\n");
	printf("Digite o raio do circulo:\n");
	scanf("%f", &r);
	
	p = 2 * 3,14 * r;
	a = 3,14 * (r * r);

	printf("O perimetro do circulo e: %.2f\n", p);
	printf("A irea do circulo e: %.2f\n", a);
	
	system("pause");
}
