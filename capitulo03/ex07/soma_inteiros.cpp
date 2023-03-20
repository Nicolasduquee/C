/* 07 - Criar um programa em linguagem C que
leia dois números inteiros e somá-los.
Se a soma for maior que 10, mostrar o
resultado. Senão exibir a mensagem
que não é possível exibir o número.*/

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	
	printf("Soma Inteiros\n\n");
	
	int v1, v2, s;

	printf("Digite dois valores intiros:\n");
	scanf("%d%d", &v1, &v2);
	
	s = v1 + v2;
	
	if (s > 10){
		printf("Resultado da soma: %d\n", s);
	}
	else{
		printf("Nao e possivel exibir o numero\n");
	}
	
	system("pause");
}
