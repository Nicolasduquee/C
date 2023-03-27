/* 04 - a) Criar um programa em linguagem C
que identifique e que ordene 2 números
 em ordem decrescente. */

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	float v1, v2;
	
	printf("Ordem decrescente\n\n");
	printf("Digite os valores:\n");
	scanf("%f%f", &v1, &v2);
	
	if (v1 > v2){
		printf("A ordem descrescente e: %.2f\n%.2f\n", v1, v2);
	}
	else
	if (v2 > v1){
		printf("A ordem descrescente e: %.2f\n%.2f\n", v2, v1);
	}
	
	system("pause");
}
