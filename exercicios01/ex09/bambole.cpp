/*Uma f�brica de brinquedos no Jap�o inventou uma nova forma
de produzir bambol�s. O cliente escolhe o raio do bambol�
e a f�brica produz o bambol� sob medida para o cliente.
Crie um programa para ajudar o fabricante a calcular o
per�metro do bambol� baseado na medida do raio escolhida
pelo cliente.*/

#include<windows.h>
#include<stdio.h>

main(){
	system("cls");
	
	float r, p;
	
	printf("Bambo� sob medida\n\n");
	printf("Digite o raio desejado para o bambol�\n");
	scanf("%f", &r);
	
	p = 2 * 2,14 * r;
	
	printf("\n");
	printf("O per�metro do baambol� ser� de: %.2f metros\n\n", p);
	
	system("pause");
}
