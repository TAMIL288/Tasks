#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    int reg_no;
    char name[10];
    float cgpa;
}acer;
int main()
{
    int n,i;
    scanf("%d",&n);
    acer *a = malloc(n * sizeof *a);
    if (a == NULL) return 1;
    for(i=0;i<n;i++)
    scanf("%d%s%f",&a[i].reg_no,a[i].name,&a[i].cgpa);
    for(i=0;i<n;i++)
    {
        if(a[i].cgpa>=8 && a[i].cgpa<=10)
        printf("%s\n",a[i].name);
    }
    free(a);
}