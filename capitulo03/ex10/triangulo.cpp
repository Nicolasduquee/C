/*Criar um programa em linguagem C que ajude
Luiz na aula de geometria, sabendo que tenha
que obter 3 números e imprimir se eles podem
ou não ser lados de um triângulo.

A condição para isto é: A<B+C e B<A+C e C<A+B.*/

#include<windows.h>
#include<stdio.h>

main(){
	system("cls");
	
	printf("Existencia de um triangulo\n\n");
	
	float l1, l2, l3;
	
	printf("Informe o primeiro numero:\n");
	scanf("%f", &l1);
	
	printf("Informe o segundo numero:\n");
	scanf("%f", &l2);
	
	printf("Informe o segundo numero:\n");
	scanf("%f", &l3);
	
	if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1){
		printf("Esses numeros podem ser lados de um triangulo\n\n");
	}
	else {
		printf("Esses numeros nao podem ser lados de um triangulo\n\n");
	}
	
	
	system("pause");
}
