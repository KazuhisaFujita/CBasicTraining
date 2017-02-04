/******************************
リスト4.1 じゃんけんプログラム

じゃんけんの手
グー  : 0
チョキ: 1
パー  : 2
******************************/
#include <stdio.h>

int main(void)
{
    int player = 0;
    int enemy = 0;

	printf("自分のじゃんけんの手を入力してください．\n");
    scanf("%d", &player);
	printf("相手のじゃんけんの手を入力してください．\n");
    scanf("%d", &enemy);

    if(player == enemy){
        printf("引き分け\n");
    }else if(player == 0 && enemy == 1){
        printf("勝ち\n");
    }else if(player == 1 && enemy == 2){
        printf("勝ち\n");        
    }else if(player == 2 && enemy == 0){
        printf("勝ち\n");        
    }else{
        printf("負け\n");
    }

    return(0);
}