/* Criar um programa em linguagem
C que imprima dois números com
o inicio de 0 e 10 e finalize 10 e 0,
todos os dois ao mesmo tempo,
com o intervalo de 0,5 segundos
utilizando FOR DUPLO. */

#include<windows.h>
#include<stdio.h>

main(){
	system("cls");
	
	int a, b;
	
	for(a = 0, b = 10; a <= 10, b >= 0; a++, b--){
		printf("%d  %d\n", a, b);
		Sleep(500);
	}
	
	
	system("pause");
}
