/*Criar um programa ( MEGA SENA )
em linguagem C que sorteie 6
números com os critérios que:
• Os números não podem ser iguais entre eles
• Nenhum dos números podem ser 0
• Os números a serem sorteados são de 1 a 60*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

main(){
	system("cls");
	
	printf("Mega Sena\n\n");
	
	printf("Aguarde o sorteio\n\n");
	
	int v1, v2, v3, v4, v5, v6;
	
	s1:
		srand(time(NULL));
		v1 = rand()%60;
	
		if(v1 == 0){
			goto s1;
		}
	fims1:;
	
	s2:
		srand(time(NULL));
		v2 = rand()%60;
		
		if (v2 == 0 || v2 == v1){
			goto s2;
		}
	fims2:;
	
	s3:
		srand(time(NULL));
		v3 = rand()%60;
		
		if (v3 == 0 || v3 == v1 || v3 == v2){
			goto s3;
		}
	fims3:;
	
	s4:
		srand(time(NULL));
		v4 = rand()%60;
		
		if (v4 == 0 || v4 == v1 || v4 == v2 || v4 == v3){
			goto s4;
		}
	fims4:;
	
	s5:
		srand(time(NULL));
		v5 = rand()%60;
		
		if (v5 == 0 || v5 == v1 || v5 == v2 || v5 == v3 || v5 == v4){
			goto s5;
		}
	fims5:;
	
	s6:
		srand(time(NULL));
		v6 = rand()%60;
		
		if (v6 == 0 || v6 == v1 || v6 == v2 || v6 == v3 || v3 == v4 || v6 == v5){
			goto s6;
		}
	fims6:;
	
	printf("Os numeros sorteados foram: %d, %d, %d, %d, %d e %d.\n\n", v1, v2, v3, v4, v5, v6);
	
	system("pause");
}
