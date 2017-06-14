/*リスト2.2*/
#include <stdio.h>

int main(void)
{

    double x;

    printf("数値を入力してください．");
    scanf("%lf", &x);

    double abs;

    if(x >= 0){
        abs = x;
    }
    if(x < 0){
        abs = -x;
    }

    printf("%fの絶対値は%fである．\n", x, abs);

    return(0);
}
