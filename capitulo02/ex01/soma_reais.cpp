//01 - Criar um programa em linguagem C que efetue
//a soma de dois números dos tipo real.

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	float num1, num2, soma;
	
	printf("Programa de soma\n");
	printf("Digite os dois numeros para soma:\n");
	scanf("%f%f",&num1,&num2);
	
	soma = num1 + num2;
	
	printf("Soma = %f\n",soma);
	
	system("pause");
}
