/*リスト2.2*/
#include <stdio.h>

int main(void)
{

    double x = -1;
    double abs;

    if(x >= 0){
        abs = x;
    }else{
        abs = -x;
    }

    printf("%fの絶対値は%fである．\n", x, abs);

    return(0);
}