//Criar um programa em linguagem C que converta
//um numero decimal de 0 a 15 em numero bin�rio.

#include<windows.h>
#include<stdio.h>
#include<math.h>

main(){
	system("cls");
	
	int dec;
	char bin;
		
	printf("Conversor de n�mero decimal para bin�rio\n\n");
	printf("Digite um n�mero decimal entre 0 e 15 para ser convertido para bin�rio/n");
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
