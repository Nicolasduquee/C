/* Criar um programa em linguagem C que
imprima uma tabuada do 1 a 10 conforme
entrada do usuário, com o intervalo de 0,5
segundos utilizando o comando FOR */

#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

main(){
	system("cls");
	
	int num, a, razao;
	
	printf("Digite o valor do multiplicador\n");
	scanf("%d", &num);
	
	for (a = 0; a <= 10; a++){
		razao = num * a;
		
		printf("%d x %d = %d\n", num, a, razao);
		
	}
	
	system("pause");
}
