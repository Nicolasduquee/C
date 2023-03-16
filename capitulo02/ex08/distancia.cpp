/* 08 - Criar um programa em linguagem C que
receba uma medida em pés, faça as conversões 
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
	printf("Digite a distancia em pes: \n\n");
	scanf("%f", &pes);
	
	pol = pes * 12;
	jar = pes * 3;
	mil= jar * 1760;
	
	printf("Distancia em:\n\n");
	printf("Pes:%.2f\n", pes);
	printf("Polegadas:%.2f\n", pol);
	printf("Jardas:%.2f\n", jar);
	printf("Milhas:%.2f\n", mil);
													
	system("pause");
}
