//Criar um programa em linguagem C que calcule o perímetro e a área
//de uma circunferência de raio R(fornecido pelo usuário).

#include<windows.h>
#include<stdio.h>
#include<math.h>

main(){
	system("cls");
	
	float r, p, a;
	
	printf("Perímetro e área de um círculo\n\n");
	printf("Digite o raio do círculo:\n");
	scanf("%f", &r);
	
	p = 2 * 3,14 * r;
	a = 3,14 * (r * r);

	printf("O perímetro do círculo é: %.2f\n", p);
	printf("A área do círculo é : %.2f\n", a);
	
	system("pause");
}
