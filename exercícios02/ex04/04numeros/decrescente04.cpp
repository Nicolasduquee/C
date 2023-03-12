/*Criar um programa em linguagem C
que identifique e que ordene 4
números em ordem decrescente.*/

#include<windows.h>
#include<stdio.h>
#include<math.h>

main(){
	system("cls");
		
	printf("4 valores em ordem decrescente\n\n");
	
	float v1, v2, v3, v4, mai, mei, mei2, men;
	
	printf("Digite o primeiro valor:\n");
	scanf("%f", &v1);
	
	mai = v1;
	men = v1;
	
	printf("Digite o segundo valor:\n");
	scanf("%f", &v2);
	
	if(v2 > mai){
		mai = v2;
	}
	else{
		men = v2;
	}
	
	printf("%f%f", mai, men);
	
	printf("Digite o terceiro valor:\n");
	scanf("%f", &v3);
	
	//if(v3 > v2 ){
	//}
	
	
		
	system("pause");
}
