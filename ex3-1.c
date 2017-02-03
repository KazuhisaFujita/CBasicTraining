/*リスト3.1*/
#include <stdio.h>

int main(void)
{
    int N = 10;
    int sum = 0;
    int i;

    for(i = 1; i < N + 1; i = i + 1){
        sum = sum + i;
    }

    printf("%d\n", sum);
    
    return(0);
}