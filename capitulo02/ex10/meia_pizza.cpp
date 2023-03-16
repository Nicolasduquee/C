/* 10 -Uma pizzaria de São Paulo inventou uma
nova modalidade de pizza, chamada de
“Meia Pizza da Casa”. O cliente escolhe o
raio da pizza e o pizzaiolo faz uma meia
pizza de calabresa com essa medida de
raio. Crie um programa para ajudar o
pizzaiolo a calcular a área da “Meia Pizza
da Casa” baseada na medida do raio
escolhida pelo cliente.*/

#include<windows.h>
#include<stdio.h>
#include<math.h>

main(){
	system("cls");
	
	float r, p, mp;
	
	printf("Meia pizza\n\n");
	printf("Digite o raio da pizza em cm:\n");
	scanf("%f", &r);
	
	p = 3,14 * (r * r);
	mp = p / 2;
	
	printf("\n");
	printf("A area da meia pizza sera de:\n");
	printf("%.2f cm \n\n", mp);
	
	system("pause");
}
