#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

main(){
	system("cls");
	
	start:
	printf("BlackJack | 21\n\n");
	
	int j1, j2, j3, j4, j5, m1, m2, m3, m4, m5, totalj, totalm, resposta;
	
	//sorteio das cartas do jogador
	
	//sorteio carta 1 do jogador
	carta1j:
		srand(time(NULL));
			j1 = rand()%10;
			
		if(j1 == 0){
			goto carta1j;
		}	
	fimc1j:;
	
	//sorteio carta 2
	carta2j:	
		srand(time(NULL));
			j2 = rand()%10;
			
		if(j2 == 0 || j2 == j1){
			goto carta2j;
		}
	fimc2j:;
		
	//soma das cartas do jogaodr
	totalj = j1 + j2;
		
	//sorteio das cartas da maquina
	
	//sorteio carta 1
	carta1m:
		srand(time(NULL));
			m1 = rand()%10;
			
		if(m1 == 0){
			goto carta1m;
		}
	fimc1m:;
	
	//sorteio carta 2	
	carta2m:
		srand(time(NULL));
			m2 = rand()%10;
			
		if (m2 == 0 || m2 == m1){
			goto carta2m;
		}
	fimc2m:;
	
	//soma das cartas da maquina
	totalm = m1 + m2;
	
	//apresentando primeiro resultado
	printf("Cartas do jogador: %d + %d = %d\n", j1, j2, totalj);
	printf("Cartas da maquina: ?\n\n");
	
	//perguntando se jogo continua
	printf("Desejar sortear mais um numero?\n 1- Sim\n 2- Nao\n\n");
	scanf("%d", &resposta);
	
	// se o jogo nao continuar
	if(resposta == 2){
		printf("Cartas do jogador: %d + %d = %d\n", j1, j2, totalj);
		printf("Cartas da maquina: %d + %d = %d\n\n", m1, m2, totalm);
		
		if(totalj > totalm){
			printf("Vitoria do jogador!\n");
			printf("Cartas do jogador estao mais proximas de 21!\n\n");
		}
		else if(totalj < totalm){
			printf("Vitoria da maquina!\n");
			printf("Cartas da maquina estao mais proximas de 21!\n\n");
		}
		else if(totalj == totalm){
			printf("Empate!\n");
			printf("Cartas do jogador sao = da maquina!\n\n");
		}
	}
	
	//se jogo continuar
	else if(resposta != 2){
		//sorteio carta 3 do jogdador
		carta3j:	
			srand(time(NULL));
				j3 = rand()%10;
				
			if(j3 == 0 || j3 == j1 || j3 == j2){
				goto carta3j;
			}
		fimc3j:;
		
		//total cartas do jogador
		totalj = j1 + j2 + j3;
		
		//sorteio carta 3 da maquina
		carta3m:
			srand(time(NULL));
				m3 = rand()%10;
			
			if (m3 == 0 || m3 == m1 || m3 == m2){
				goto carta3m;
			}
		fimc3m:;
		
		//total cartas da maquina
		totalm = m1 + m2 + m3;
		
		//apresentando segundo resultado
		printf("Cartas do jogador: %d + %d + %d = %d\n", j1, j2, j3, totalj);
		printf("Cartas da maquina: %d + %d + ?\n\n", m1, m2);
		
		//se limete for ultrapassado
		if(totalj > 21 && totalm < 21){
			printf("Cartas do jogador: %d + %d + %d = %d\n", j1, j2, j3, totalj);
			printf("Cartas da maquina: %d + %d + %d = %d\n\n", m1, m2, m3, totalm);
			printf("Maquina ganhou!\n");
			printf("Jogador estourou limete das cartas\n\n");
			goto fim;
		}
		else if(totalm > 21 && totalj < 21) {
			printf("Cartas do jogador: %d + %d + %d = %d\n", j1, j2, j3, totalj);
			printf("Cartas da maquina: %d + %d + %d = %d\n\n", m1, m2, m3, totalm);
			printf("Jogador ganhou!\n");
			printf("Maquina estourou limete das cartas!\n\n");
			goto fim;
		}
		else if (totalm > 21 && totalj > 22){
			printf("Cartas do jogador: %d + %d + %d = %d\n", j1, j2, j3, totalj);
			printf("Cartas da maquina: %d + %d + %d = %d\n\n", m1, m2, m3, totalm);
			printf("Empate!\n");
			printf("Jogador e maquina estouraram limite de cartas!\n\n");
			goto fim;
		}
		
		//perguntando se jogo continua
		printf("Desejar sortear mais um numero?\n 1- Sim\n 2- Nao\n\n");
		scanf("%d", &resposta);
		
		//se jogo nao continuar
		if(resposta == 2){
			printf("Cartas do jogador: %d + %d + %d = %d\n", j1, j2, j3, totalj);
			printf("Cartas da maquina: %d + %d + %d = %d\n\n", m1, m2, m3, totalm);
			
			if(totalj == totalm){
				printf("Empate!\n");
				printf("Cartas do jogador = cartas da maquina!\n\n");
			}
			else if (totalj == 21 || (totalj < 21 && totalj > totalm)){
				printf("Vitoria do jogador!\n");
				printf("Cartas do jogador estao mais proximas de 21!\n\n");
			}
			else if (totalm == 21 || (totalm < 21 && totalm > totalj)){
				printf("Vitoria da maquina!\n");
				printf("Cartas da maquina estao mais proximas de 21!\n\n");
			}
		}
		
		//se jogo continuar
		else if(resposta != 2){
			//sorteio carta 4 jogador
			carta4j:	
				srand(time(NULL));
					j4 = rand()%10;
			
				if(j4 == 0 || j4 == j1 || j4 == j2 || j4 == j3){
					goto carta4j;
				}
			fimc4j:;
	
			//total cartas do jogador
			totalj = j1 + j2 + j3 + j4;
			
			//sorteio carta 4 da maquina
			carta4m:	
				srand(time(NULL));
					m4 = rand()%10;
			
				if(m4 == 0 || m4 == m1 || m4 == m2 || m4 == m3){
					goto carta4m;
				}
			fimc4m:;
			
			//total cartas da maquina
			totalm = m1 + m2 + m3 + m4;
			
			// apresentando terceiro resultado
			printf("Cartas do jogador: %d + %d + %d + %d = %d\n", j1, j2, j3, j4, totalj);
			printf("Cartas da maquina: %d + %d + %d + ?\n\n", m1, m2, m3);
			
			//se limete for ultrapassado
			if(totalj > 21 && totalm < 21){
				printf("Cartas do jogador: %d + %d + %d + %d = %d\n", j1, j2, j3, j4, totalj);
				printf("Cartas da maquina: %d + %d + %d = %d\n\n", m1, m2, m3, m4, totalm);
				printf("Maquina ganhou!\n");
				printf("Jogador estourou limete das cartas\n\n");
				goto fim;
			}
			else if(totalm > 21 && totalj < 21) {
				printf("Cartas do jogador: %d + %d + %d + %d = %d\n", j1, j2, j3, j4, totalj);
				printf("Cartas da maquina: %d + %d + %d = %d\n\n", m1, m2, m3, m4, totalm);
				printf("Jogador ganhou!\n");
				printf("Maquina estourou limete das cartas!\n\n");
				goto fim;
			}
			else if (totalm > 21 && totalj > 21){
				printf("Cartas do jogador: %d + %d + %d + %d = &d\n", j1, j2, j3, j4, totalj);
				printf("Cartas da maquina: %d + %d + %d = %d\n\n", m1, m2, m3, m4, totalm);
				printf("Empate!\n");
				printf("Jogador e maquina estouraram limite de cartas!\n\n");
				goto fim;
			}
			
			// perguntando se jogo continua
			printf("Desejar sortear mais um numero?\n 1- Sim\n 2- Nao\n\n");
			scanf("%d", &resposta);
			
			// se jogo nao continuar
			if (resposta == 2){
				printf("Cartas do jogador: %d + %d + %d + %d = %d\n", j1, j2, j3, j4, totalj);
				printf("Cartas da maquina: %d + %d + %d + %d = %d\n\n", m1, m2 ,m3 ,m4, totalm);
				
				if (totalm == totalj){
					printf("Empate!\n");
					printf("Cartas do jogador = cartas da maquina\n\n");
				}
				else if (totalj == 21 || (totalj < 21 && totalj > totalm)){
					printf("Vitoria do jogador!\n");
					printf("Cartas do jogador estao mais proximas de 21!\n\n");
				}
				else if (totalm == 21 || (totalm < 21 && totalm > totalj)){
					printf("Vitoria da maquina!\n");
					printf("Cartas da maquina estao mais proximas de 21!\n\n");
				}
				
			}
			
			// se jogo continuar
			if (resposta != 2){
				// sorteio carta 5 jogador
				carta5j:	
					srand(time(NULL));
						j5 = rand()%10;
			
					if(j5 == 0 || j5 == j1 || j5 == j2 || j5 == j3 || j5 == j4){
						goto carta5j;
					}
				fimc5j:;
				
				// total cartas jogador
				totalj = j1 + j2 + j3 + j4 + j5;
				
				// sorteio carta 5 maquina
				carta5m:	
					srand(time(NULL));
						m5 = rand()%10;
			
					if(m5 == 0 || m5 == m1 || m5 == m2 || m5 == m3 || m5 == m4){
						goto carta5m;
					}
				fimc5m:;
				
				// total cartas maquina
				totalm = m1 + m2 + m3 + m4 + m5;
				
				// apresentando quarto resultado
				printf("Cartas do jogador: %d + %d + %d + %d + %d = %d\n", j1, j2, j3, j4, j5, totalj);
				printf("Cartas da maquina: %d + %d + %d + %d + ?\n\n", m1, m2, m3, m4);
				
				// clique para ver resultado
				printf("Digite qualquer tecla para ver o resultado!");
				scanf("\n");
				
				// resultado final
				printf("Cartas do jogador: %d + %d + %d + %d + %d = %d\n", j1, j2, j3, j4, j5, totalj);
				printf("Cartas da maquina: %d + %d + %d + %d + %d = %d\n\n", m1, m2, m3, m4, m5, totalm);
				
				if(totalj == totalm){
					printf("Empate!\n");
					printf("Cartas do jogador = cartas da maquina!\n\n");
				}
				
				else if (totalj == 21 || (totalj < 21 && totalj > totalm)){
					printf("Vitoria do jogador!\n");
					printf("Cartas do jogador estao mais proximas de 21!\n\n");
				}
				
				else if (totalm == 21 || (totalm < 21 && totalm > totalj)){
					printf("Vitoria da maquina!\n");
					printf("Cartas da maquina estao mais proximas de 21!\n\n");
				}
				
				else if(totalj > 21 && totalm < 21){
					printf("Maquina ganhou!\n");
					printf("Jogador estourou limete das cartas\n\n");
				}
				
				else if(totalm > 21 && totalj < 21) {
					printf("Jogador ganhou!\n");
					printf("Maquina estourou limete das cartas!\n\n");
				}
				
				else if (totalm > 21 && totalj > 21){
					printf("Empate!\n");
					printf("Jogador e maquina estouraram limite de cartas!\n\n");
					}
				}
			}
		}
	fim:;
	system("pause");
	}

