#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

void Game(){
	while(1){
		//���׽���
		printf("\n              ��������Ϸ\n");
		printf("*****************************************\n");
		printf("*               1.��ʼ��Ϸ              *\n");
		printf("*               2.������Ϸ              *\n");
		printf("*****************************************\n");
		
		int a;
		scanf("%d", &a);
		if(a == 1){

		}
		else if (a == 2){
			printf("��Ϸ����\n");
			break;
		}
		else{
			printf("���������������\n");
		}

	}
}

int main(){
	
	Game();
	system("pause");
	return 0;
}