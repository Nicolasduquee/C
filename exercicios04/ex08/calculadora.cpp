#include <windows.h>
#include <stdio.h>

int a, b, resultado;

adicao(){
	resultado = a + b;
	printf("%d + %d = %d\n\n", a, b, resultado);
}

subtracao(){
	resultado = a - b;
	printf("%d - %d = %d\n\n", a, b, resultado);
}

multiplicacao(){
	resultado = a * b;
	printf("%d x %d = %d\n\n", a, b, resultado);
}

divisao(){
	resultado =  a / b;
	printf("%d / %d = %d\n\n", a, b, resultado);
}

main(){
	system("cls");
	
	int op;
	
	menu:
	printf("Calculadora\n\n");
	Sleep(500);
	
	printf("Escolha a operacao desejada:\n\n");
	Sleep(500);
	
	printf("1 - Adicao\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("5 - Sair\n\n");
	
	scanf("%d", &op);
	printf("\n");
	
	if (op != 1 && op != 2 && op != 3 && op != 4 && op != 5){
		system("cls");
		goto menu;
	}
	
	else if (op == 5){
		goto fim;
	}
	
	Sleep(500);
	
	printf ("Digite dois valores:\n\n");
	scanf("%d%d", &a, &b);
	Sleep(500);
	printf("\n\n");
	
	if (op == 1){
		printf("Adicao\n\n");
		Sleep(500);
		adicao();
	}
	
	else if (op == 2){
		printf("Subtracao\n\n");
		Sleep(500);
		subtracao();
	}
	
	else if (op == 3){
		printf("Multiplicacao\n\n");
		Sleep(500);
		multiplicacao();
	}
	
	else if (op == 4){
		printf("Divisao\n\n");
		Sleep(500);
		divisao();
	}
	
	volta_menu:
	printf("Voltar para o menu?\n\n");
	printf("1 - Sim\n2 - Nao\n");
	scanf("%d", &op);
	Sleep(500);
	
	if (op != 1 && op !=2){
		goto volta_menu;
	}
	
	else if (op == 1){
		system("cls");
		goto menu;
	}
	
	fim:;
	
	system("pause");
}


