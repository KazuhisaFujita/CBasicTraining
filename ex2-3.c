/*リスト2.3*/
#include <stdio.h>

int main(void)
{
    int score = 70;
    
    if(score >= 80){
        printf("優です．\n");
    }else if(score >= 60){
        printf("可です．\n");
    }else{
        printf("不可です．\n");
    }

    return(0);
}