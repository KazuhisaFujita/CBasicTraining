/*リスト3.2*/
#include <stdio.h>

int main(void)
{
    int M = 3, N = 4;
    int i, j;

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("*");
        }
        printf("\n");
    }

    return(0);
}