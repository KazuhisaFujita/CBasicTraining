/*リスト3.2*/
#include <stdio.h>

int main(void)
{
    int N = 10;
    int i;

    for(i = 0; i < N + 1; i++){
        if(i % 2 == 0){
            printf("%dは偶数です\n", i);
        }
    }

    return(0);
}