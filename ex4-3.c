/*リスト4.3*/  
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    srand((unsigned) time(NULL));

    for(;;){
        a = rand()%3;
        printf("%d\n", a);
        if(a == 0){
            break;
        }
    }
    return(0);
}