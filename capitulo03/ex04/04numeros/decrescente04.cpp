/* 04 - c) Criar um programa em linguagem C
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
	mei = v1;
	
	printf("Digite o segundo valor:\n");
	scanf("%f", &v2);
	
	if(v2 > mai){
		mai = v2;
	}
	else{
		mei = v2;
	}
	
	printf("Digite o terceiro valor:\n");
	scanf("%f", &v3);
	
	if (v3 > mai){
		mei2 = mei;
		mei = mai;
		mai = v3;
	}
	else if (v3 < mai && v3 > mei){
		mei2 = mei;
		mei = v3;
	}
	else if (v3 < mei){
		mei2 = v3;
	}
	
	printf("Digite o quarto valor:\n");
	scanf("%f", &v4);
	
	if (v4 > mai){
		men = mei2;
		mei2 = mei;
		mei = mai;
		mai = v4;
	}
	else if (v4 > mei && v4 < mai){
		men = mei2;
		mei2 = mei;
		mei = v4;
	}
	else if ( v4 > mei2 && v4 < mei){
		men = mei2;
		mei2 = v4;
	}
	else if (v4 < mei2){
		men = v4;
	}

	printf("A ordem decrescente e: %.0f, %.0f, %.0f, %.0f.co", mai, mei, mei2, men);
		
	system("pause");
}
