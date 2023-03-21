/* 04 - b) Criar um programa em linguagem C
que identifique e que ordene 3
números em ordem decrescente.*/

#include<windows.h>
#include<stdio.h>
#include<math.h>

main(){
	system("cls");
		
	printf("Valores em ordem decrescente\n\n");
	
	float v1, v2, v3;
	
	printf("Digite os tres valores:\n");
	scanf("%f%f%f", &v1, &v2, &v3);
	
	if (v1 > v2 && v1 > v3 && v2 > v3){
		printf("A ordem decrescente e: %.2f, %.2f, %.2f\n", v1, v2, v3);
	}
	else if(v1 > v2 && v1 > v3 && v3 > v2){
		printf("A ordem decrescente e: %.2f, %.2f, %.2f\n", v1, v3, v2);
	}
	else if (v2 > v1 && v2 > v3 && v1 > v3){
		printf("A ordem decrescente e: %.2f, %.2f, %.2f\n", v2, v1, v3);
	}
	else if (v2 > v1 && v2 > v3 && v3 > v1){
		printf("A ordem decrescente e: %.2f, %.2f, %.2f\n", v2, v3, v1);
	}
	else if (v3 > v1 && v3 > v2 && v1 > v2){
		printf("A ordem decrescente e: %.2f, %.2f, %.2f\n", v3, v1, v2);
	}
	else if (v3 > v1 && v3 > v2 && v2 > v1){
		printf("A ordem decrescente e: %.2f, %.2f, %.2f\n", v3, v2, v1);
	}	
	system("pause");
}
