#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int i, j, sum;

    for(i = 0; i < 5; i++) {
        sum = 0;
        for(j = i + 1; j < 5; j++) {
            sum += a[j];
        }
        printf("%d\n", sum);
    }

    return 0;
}