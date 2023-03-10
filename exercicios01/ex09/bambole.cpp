/*Uma fábrica de brinquedos no Japão inventou uma nova forma
de produzir bambolês. O cliente escolhe o raio do bambolê
e a fábrica produz o bambolê sob medida para o cliente.
Crie um programa em linguagem C para ajudar o fabricante a calcular o
perímetro do bambolê baseado na medida do raio escolhida
pelo cliente.*/

#include<windows.h>
#include<stdio.h>

main(){
	system("cls");
	
	float r, p;
	
	printf("Bambole sob medida\n\n");
	printf("Digite o raio desejado para o bambole\n");
	scanf("%f", &r);
	
	p = 2 * 2,14 * r;
	
	printf("\n");
	printf("O perimetro do baambole será de: %.2f metros\n\n", p);
	
	system("pause");
}
