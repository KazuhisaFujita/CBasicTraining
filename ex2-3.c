/*リスト2.3*/
#include <stdio.h>

int main(void)
{

    double x;
    double abs;

    printf("数値を入力してください．");
    scanf("%lf", &x);

    if(x >= 0){
        abs = x;
    }else{
        abs = -x;
    }

    printf("%fの絶対値は%fである．\n", x, abs);

    return(0);
}
