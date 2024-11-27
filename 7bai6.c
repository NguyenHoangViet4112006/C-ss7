#include <stdio.h>

int main() {
    printf("input: 1, 2, 3, 4, 5\n");
    int num[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        if (num[i] % 2 == 0) {
            num[i] = num[i] + 3;
        } else {
            num[i] = num[i] + 2;
        }
    }
    printf("output");
    for (int i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}

