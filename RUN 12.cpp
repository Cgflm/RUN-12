#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
int main()
{
	int win = 12, player, computer, open;
	float num1, num2=1, c, game;
	printf("规则：谁先到12谁就赢\n开始？(0/1)");
	scanf("%d", &open);
	if (open == 1)
	{
		num2 = 0;
		for (game = 0; game < win; game == num2)
		{
			
			printf("你的回合\n输入你要添加的数（1/2）\n");
			scanf("%f", &num1);
			printf("目前game值：%f\n", game);
			if (num1==1||num1==2)
			{
				printf("你输入的数字是：%f\n", num1);
				c = num2 + num1;
				num2 = num2 + num1;
			printf("目前数字：%f\n", num2);
				if (num2<12)
				{
					if (c / 2 == 1 || c / 2 == 2 || c / 2 == 3 || c / 2 == 4 || c / 2 == 5 || c / 2 == 6)
					{
						num2 =num2 + 2;
						printf("电脑输入的数字是：2\n");
					}
					else
					{
						num2 =num2 + 1;
						printf("电脑输入的数字是：1\n");
					}
					printf("目前数字：%f\n", num2);
				}
				else if (num2 == 12)
				{
					printf("你赢了\n");
					return 0;

				}
				
			}
			else
			{
				printf("输入错误，请重新输入\n");
			}
	

		}
		printf("%f\n", num2);
	}
	else
	{
		printf("游戏结束\n");
		return 0;
	}
	
	return 0;
}