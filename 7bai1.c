#include <stdio.h>

int main() {
    int num[] = {10, 20, 30, 40, 50};
    int dodai = sizeof(num) / sizeof(num[0]);
    printf("cac phan tu trong mang la ");
    for(int i= 0; i < dodai; i++) {
        printf("%d ", num[i]);
    }
    printf("do dai cua mang la %d", dodai);

    return 0;
}

