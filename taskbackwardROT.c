#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i,rot,temp;
scanf("%d",&n);
int *arr = malloc(n * sizeof *arr);
if (!arr) return 1;
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
scanf("%d",&rot);
rot=rot%n;
while(rot--)
{
    temp=arr[n-1];
    for(i=n-1;i>=0;i--){
    arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
for(i=0;i<n;i++)
printf("%d ",arr[i]);
free(arr);

}