/*Criar um programa em linguagem C
que leia um n�mero positivo do teclado
e informar se ele � divis�vel por 
10, por 5, por 2 ou se n�o � divis�vel.*/

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	printf("Valor divisivel\n\n");
	
	int val;

	printf("Digite um valor positivo:\n");
	scanf("%d", &val);
	
	if (val % 10 == 0){
		printf("Valor e divisivel por 10\n");
	}
	if (val % 5 == 0){
		printf("Valor e divisivel por 5\n");
	}
 	if (val % 2 == 0){
		printf("Valor e divisivel por 2\n");
	}
	else{
		printf("Valor nao e divisivel\n");
	}
	
	system("pause");
}
