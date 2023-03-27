/* 05 - Criar um programa em linguagem C
que resolva a fórmula de Bháskara
e determine se é possível obter raiz
de um número negativo.*/

#include<windows.h>
#include<stdio.h>
#include<math.h>

main(){
	system("cls");
		
	printf("Formulas de Bhaskara\n\n");
	
	int a, b, c, d, x1, x2;
	
	printf("Digite os valores de a, b e c:\n");
	scanf("%d%d%d", &a, &b, &c);
	
	d = (b * b) - 4 * a * c;
	
	printf("\n");
	
	if(d < 0){
		printf("Nao e possuivel calcular a raiz de um numero negativo.\n\n");		
	}
	else{
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		
		printf("Delta = %d\n", d);
		printf("X1 = %d\n", x1);
		printf("X2 = %d\n", x2);
	}
	system("pause");
}
