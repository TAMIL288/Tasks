#include <stdio.h>

int main()
{
    int a[5], *p, i, sum = 0;

    scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);

    p = a;

    for(i=0;i<5;i++)
        sum += *(p+i);

    printf("%d",sum);

    return 0;
}