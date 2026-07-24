#include <stdio.h>
#include<stdlib.h>
  
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int *a = malloc(n * n * sizeof *a);
    if (!a) return 1;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d", a + i*n + j);
    for(i=0;i<n;i++,printf("\n"))
    for(j=0;j<n;j++)
    printf("%d ", *(a + i*n + j));
    free(a);

    return 0;
}