//Criar um programa em linguagem C que calcule o per�metro e a �rea
//de uma circunfer�ncia de raio R(fornecido pelo usu�rio).

#include<windows.h>
#include<stdio.h>
#include<math.h>

main(){
	system("cls");
	
	float r, p, a;
	
	printf("Per�metro e �rea de um c�rculo\n\n");
	printf("Digite o raio do c�rculo:\n");
	scanf("%f", &r);
	
	p = 2 * 3,14 * r;
	a = 3,14 * (r * r);

	printf("O per�metro do c�rculo �: %.2f\n", p);
	printf("A �rea do c�rculo � : %.2f\n", a);
	
	system("pause");
}
