/*Um fabricante de ferraduras africano acaba de expandir os negócios.
Agora ele fabrica ferraduras para qualquer tipo de animal com casco.
O formato das ferraduras é o de meia tora.
O cliente escolhe o raio externo e o raio interno e ele produz a ferradura.
Crie um programa para ajudar o ferreiro a calcular a
área da ferradura baseado na medida do raio
esterno e interno fornecido pelo cliente.*/

#include<windows.h>
#include<stdio.h>
#include<math.h>

main(){
	system("cls");
	
	float rI, rE, aI, aE, a;
	
	printf("Raio da ferradura\n\n");
	printf("Digite o raio externo e interno da ferradura em cm:\n");
	scanf("%f%f", & rE, &rI);
	
	aI = 3.14 * (rI * rI);
	aE = 3.14 * (rE * rE);
	a = (aE - aI) / 2;
	
	printf("%.2f", aI);
	printf("%.2f", aE);
	printf("A area total da ferradura sera de: %.2f cm.\n\n", a);
	
	system("pause");
}
