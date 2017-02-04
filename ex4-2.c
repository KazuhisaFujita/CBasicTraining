/*リスト4.2*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;

    /*乱数の種の初期化*/
    srand((unsigned) time(NULL));

    a = rand()%3;
	printf("%d\n", a);

    return(0);
}