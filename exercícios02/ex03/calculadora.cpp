/*Criar um programa (CALCULADORA ) em
linguagem C que calcule as quatro
operações básicas ( + , - , / e * )*/

#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
		printf("Calculadora\n\n");
		
		float v1, v2, rCon;
		int rOp, rLop;
		
		start:
			
			printf("Escolha a operacao:\n");
			printf("1- Adicao;\n");
			printf("2- Subtracao;\n");
			printf("3- Divisao;\n");
			printf("4- Multiplicacao;\n");
			printf("5- Sair;\n");
			scanf("%d", &rOp);
			
			strOp:
				if(rOp==1){
					printf("Adicao\n");
					printf("\n");
					printf("Digite os valores:\n");
					scanf("%f%f", &v1, &v2);
					rCon = v1 + v2;
				}
				else
				if (rOp == 2){
					printf("Subtracao\n");
					printf("\n");
					printf("Digite os valores:\n");
					scanf("%f%f", &v1, &v2);
					rCon = v1 - v2;
				}
				else
				if (rOp == 3){
					printf("Divisao\n");
					printf("\n");
					printf("Digite os valores:\n");
					scanf("%f%f", &v1, &v2);
					rCon = v1 / v2;
				}
				else
				if (rOp == 4){
					printf("Multiplicacao\n");
					printf("\n");
					printf("Digite os valores:\n");
					scanf("%f%f", &v1, &v2);
					rCon = v1 * v2;
				}   
				else
				if (rOp == 5){
					goto end;
				} 
		
				printf("O resultado e: %.2f\n\n", rCon);
			
				printf("Deseja refaer operacao?\n");
				printf("1-Sim\n2-Nao\n3-Outra operacao\n\n");
				scanf("%d", &rLop);
			
				if(rLop == 1){
					goto strOp;
				}
				else
				if(rLop == 2){
					goto endOp;
				}
				else
				if(rLop == 3){
					goto start;
				}
				
			endOp:
		
		
			system("pause");
			
		end:;
}
