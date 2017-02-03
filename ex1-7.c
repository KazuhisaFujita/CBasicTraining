/*リスト1.7*/
#include<stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;

    printf("%f\n", (double) a / b);
    printf("%f\n", a / (double) b);
    printf("%f\n", (double) (a / b) );

    return(0);
}