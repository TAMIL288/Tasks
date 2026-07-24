#include <stdio.h>

int main()
{
    int ch;
    float a,b;

    scanf("%d",&ch);

    if(ch==1)
    {
        scanf("%f",&a);
        printf("%.2f",a*a);
    }
    else if(ch==2)
    {
        scanf("%f%f",&a,&b);
        printf("%.2f",a*b);
    }
    else if(ch==3)
    {
        scanf("%f",&a);
        printf("%.2f",3.14*a*a);
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}