/*Criar um programa em linguagem C que
receba uma medida em p�s, fa�a as convers�es 
e a seguir mostre os resultados.
a) Polegadas;
b) Jardas;
c) Milhas.*/

#include<windows.h>
#include<stdio.h>

main(){
	system("cls");
	
	float pes, pol, jar, mil;
	
	printf("Conversor de medidas\n\n");
	printf("Digite a dist�ncia em p�s: \n\n");
	scanf("%f", &pes);
	
	pol = pes * 12;
	jar = pes * 3;
	mil= jar * 1760;
	
	printf("Dist�ncia em:\n\n");
	printf("P�s:%.2f\n", pes);
	printf("Polegadas:%.2f\n", pol);
	printf("Jardas:%.2f\n", jar);
	printf("Milhas:%.2f\n", mil);
													
	system("pause");
}
