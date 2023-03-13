/*Criar um programa em linguagem C 
que identifique se o numero é positivo, negativo ou NULO.*/

#include<windows.h>
#include<stdio.h>

main(){
	system("cls");
	
		int n;
		
		printf("Positivo, negativo ou nulo\n\n");
		printf("Digite um valor:\n");
		scanf("%d", &n);
		
		if(n < 0){
			printf("O valor e negativo!\n\n");
		}
		else
		if (n > 0){
			printf("O valor e positivo!\n\n");
		}
		else
		if(n == 0){
			printf("O valor e nulo!\n\n");
		}
		
	
	system("pause");
}
