#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

void Game(){
	while(1){
		//简易界面
		printf("\n              猜数字游戏\n");
		printf("*****************************************\n");
		printf("*               1.开始游戏              *\n");
		printf("*               2.结束游戏              *\n");
		printf("*****************************************\n");
		
		int a;
		scanf("%d", &a);
		if(a == 1){

		}
		else if (a == 2){
			printf("游戏结束\n");
			break;
		}
		else{
			printf("输入错误重新输入\n");
		}

	}
}

int main(){
	
	Game();
	system("pause");
	return 0;
}