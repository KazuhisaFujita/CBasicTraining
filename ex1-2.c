/*リスト1.2*/
#include <stdio.h>

int main(void)
{
    int i = 16;
    double f = 3.14;
    char c1 = 'A';
    char *c2 = "Hello";

    printf("printfの使い方\n");

    /*変数の表示*/
    printf("整数 %d\n", i);
    printf("浮動小数 %f\n", f);
    printf("文字 %c\n", c1);
    printf("整数 %d\n", c1);
    printf("文字列 %s\n", c2);
    printf("8進数 %o\n", i);
    printf("16進数 %x\n", i);

    /*変数と変数指定子の型が異なった場合*/
    printf("整数 %f\n", i);
    printf("浮動小数 %d\n", f); 

    return(0);
}
