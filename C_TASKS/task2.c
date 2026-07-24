#include <stdio.h>

int main()
{
    char a;

    scanf("%c", &a);

    if (a >= 'a' && a <= 'z')
    {
        printf("Lowercase");
    }
    else if (a >= 'A' && a <= 'Z')
    {
        printf("Uppercase");
    }
    else if (a >= '0' && a <= '9')
    {
        printf("Number");
    }
    else
    {
        printf("Special Character");
    }

    return 0;
}