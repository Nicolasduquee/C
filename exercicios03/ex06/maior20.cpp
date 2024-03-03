/*Criar um programa em linguagem C
que leia um número do usuário. 
Se for maior que 20, imprimir 
a metade desse numero.*/

#include<windows.h>
#include<stdio.h>

main(){
	system("cls");
	
	printf("Numero maior que 20\n\n");
	
	float num, res;
	
	printf("Digite um numero:\n");
	scanf("%f", &num);
	
	if(num > 20){
		res = num / 2;
		
		printf("Valor maior que 20!\n");
		printf("Medate de %.2f e %.2f\n", num, res);
	}

	system("pause");
}
