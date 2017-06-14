/*リスト2.1*/
#include <stdio.h>

int main()
{
    int i;
    float f;
    double lf;

    printf("i = ");
    scanf("%d", &i);
    printf("f = ");
    scanf("%f", &f);
    printf("lf = ");
    scanf("%lf", &lf);

    printf("i = %d, f = %f, lf = %f\n", i, f, lf);
}
