//Criar um programa em linguagem C que efetue
//a soma de dois números dos tipo real.

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	int num1, num2, soma;
	
	printf("Programa de soma\n");
	printf("Digite os dois numeros para soma:\n");
	scanf("%d%d",&num1,&num2);
	
	soma = num1 + num2;
	
	printf("Soma = %d\n",soma);
	
	system("pause");
}
