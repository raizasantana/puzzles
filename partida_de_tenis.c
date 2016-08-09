/*
As regras de um jogo de tênis tem diversos detalhes, mas para simplificar o problema, você deve implementar apenas as regras de um game:

    Em uma game cada jogador pode ter a seguinte pontuação: 0, 15, 30, ou 40;
    Os jogadores sempre começam com 0 pontos;
    Se o jogador possui 40 pontos e ganha a disputa, ele vence o game;
    Se ambos jogadores atingem 40 pontos, ocorre um empate (deuce);
    Estando em empate, o jogador que ganhar a bola seguinte está em vantagem (advantage);
    Se um jogador em vantagem ganha novamente a bola, ele vence o game;
    Se um jogador estiver em vantagem e o outro ganhar a bola, volta a ocorrer o empta (deuce).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int ptJog1 = 0, ptJog2 = 0, jog = 0;
	
	srand (time(NULL));
	int random = rand() % 100;
	int empate = 1;
	
	printf("Inicio de jogo: P1: %d - P2 %d\n",ptJog1,ptJog2);
	
	do{
		//Quem ganha a bola
		if(random % 2 != 0) //Jogador 1 ganha a bola
		{
			printf("Jogador 1 ganha a bola.\n");
			ptJog1++;
			jog = 0;
		}
			
		else //Jogador 2 ganha a bola
		{
			printf("Jogador 2 ganha a bola.\n");
			ptJog2++;
			jog = 1;
		}
			
		random = rand() % 100;
		printf("PLACAR DA RODADA: P1: %d - P2 %d\n",ptJog1,ptJog2);
		
	}while (ptJog1 < 40 && ptJog2 < 40);
	
	if(ptJog1 == ptJog2)
	{
		while(empate == 1)
		{
			random = rand() % 100;
			if(random % 2 != 0)
			{
				printf("Jogador 1 ganha a bola.\n");
				jog = 0;
			}
			else
			{
				printf("Jogador 2 ganha a bola.\n");
				jog = 1;
			}
				
			
			random = rand() % 100;
			if(random % 2 != 0 && jog == 0)
			{
				printf("JOGADOR 1 VENCEU O JOGO!\n FIM DA PARTIDA.\n");
				empate = 0;
			}
			else if (random % 2 == 0 && jog == 1)
			{
				printf("JOGADOR 2 VENCEU O JOGO!\n FIM DA PARTIDA.\n");
				empate = 0;
			} else
			{
				printf("EMPATE CONTINUA.\n");
				continue;
			}
				
			
		}
	}

	
	
}