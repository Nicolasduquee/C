/*Criar um programa em linguagem C que converta
um numero decimal de 0 a 15 em numero binário.*/

#include<windows.h>
#include<stdio.h>
#include<math.h>

main(){
	system("cls");
	
	int dec;
	char bin;
		
	printf("Conversor de número decimal para binário\n\n");
	printf("Digite um número decimal entre 0 e 15 para ser convertido para binário/n");
	scanf("%d", &dec);
	
	bin = "";
	
	while (dec > 0){
		
		if(dec % 2 == 0){
			bin = "1" + bin;
		}
		
		else{
			bin = "0" + bin;
		}
		
	}
		
	
	system("pause");
}
