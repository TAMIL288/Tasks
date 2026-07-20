#include <stdio.h>
#include<stdlib.h>
  
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int *arr, *a;
    arr = malloc(r * c * sizeof *arr);
    if (!arr) return 1;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d", &arr[i*c + j]);
    a = arr;
    for(i=0;i<r;i++,printf("\n"))
    for(j=0;j<c;j++)
    printf("%d ", *((a)+(i*c)+j));

    free(arr);

    return 0;
}