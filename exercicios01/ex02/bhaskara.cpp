// Criar um programa em linguagem C que resolva a fórmula deBháskara.

#include <windows.h>
#include <stdio.h>
#include <math.h>


main(){
	system("cls");
	
	float a, b, c, d, x1, x2;
	
	printf("Fórmula de Bháskara\n");
	printf("Digite os valores de a, b e c, respectivamente:\n");
	scanf("%f%f%f", &a, &b, &c);
	
	d = (b * b) - (4 * a * c);
	x1 = (-b + sqrt(d))/ (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	
	printf("Delta = %.2f\n", d);
	printf("x1 = %.2f e x2 = %.2f\n\n", x1, x2);

	
	system("pause");
}
