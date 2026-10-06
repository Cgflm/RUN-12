#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);  
	SetConsoleCP(CP_UTF8);
	srand(time(0));
	int win = 12, player, computer=0,look=2,ster=0;
	float num1, num2 = 1, c, game=0,open=0;
	printf("规则：谁先到12谁就赢\n");
	do
	{
		if (game == win)
		{
			printf("游戏结束\n");
			if (look==1)
			{
				printf("你赢了\n");
			}
			else if (look==2)
			{
				printf("你输了");
			}
			ster = 1;
		}
		else
		{
			if(look==2)
			{ 
				printf("请输入（0或1）\n");
				scanf("%d", &player);
				game += player;
				look = 1;
				printf("你加了%d\n总数为%.0f\n", player, game);
			}
			else if (look==1)
			{
				computer = rand() % 2;
				game += computer;
				look = 2;
				printf("电脑加了%d\n现在的数为>>>%.0f<<<\n", computer, game);
			}
		}

	}	while (ster < 1);
return 0;
}