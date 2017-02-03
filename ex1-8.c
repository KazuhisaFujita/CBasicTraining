/*リスト1.8*/
#include <stdio.h>

int main(void)
{
    int kingaku;
    int maisuu;

    kingaku = 700;

    maisuu = kingaku/500 + 1;

    printf("%d円払うためには５００円玉%d枚必要です．", kingaku, maisuu);

    return(0);
}