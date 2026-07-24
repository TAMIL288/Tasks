#include <stdio.h>

int main()
{
	int n1,n2;
    float l1,l2;
    
    scanf("%d%d",&n1,&n2);
    scanf("%f%f",&l1,&l2);
    
    printf("%d %d\n",n1+n2,n1-n2);
    printf("%.1f %.1f",l1+l2,l1-l2);
    
       
    
    return 0;
}