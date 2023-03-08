//Criar um programa em linguagem C que faça 
//a conversão de m em km hm, dam, dc, dm e mm.

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");

	float 	mm, cm, dm, m, dam, hm, km;
	
	printf("Conversor de medidas de comprimento\n\n");
	printf("Digite a distancia em metros a ser convertida:\n");
	scanf("%f", &m);
	
	dm = m * 10;
	cm = dm * 10;
	mm = cm * 10;
	dam = m / 10;
	hm = dam / 10;
	km = hm / 10;
	
	printf("\n");
	printf("Distância em:\n");
	printf("Metros: %.2f\n", m);
	printf("Decimetros: %.2f\n", dm);
	printf("Centimetros: %.2f\n", cm);
	printf("Milimetros: %.2f\n", mm);
	printf("Decametros: %.2f\n", dam);
	printf("Hectometros: %.2f\n", hm);
	printf("Quilometros: %.3f\n", km);
	
	system("pause");
}
