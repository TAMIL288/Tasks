#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {

            if(i == j || i + j == n - 1)
                printf("%d", j);   // print number
            else
                printf(" ");       // print space
        }
        printf("\n");
    }

    return 0;
}