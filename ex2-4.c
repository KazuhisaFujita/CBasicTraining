/*リスト2.4*/
#include <stdio.h>

int main(void)
{
    int score;

    printf("点数を入力してください．");
    scanf("%d", &score);


    if(score >= 80){
        printf("優です．\n");
    }else if(score >= 60){
        printf("可です．\n");
    }else{
        printf("不可です．\n");
    }

    return(0);
}
