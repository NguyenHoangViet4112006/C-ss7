#include <stdio.h>

int main() {
    int num;
    printf("nhap so phan tu cua mang ");
    scanf("%d", &num);
    int mang[num];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < num; i++) {
        printf("phan tu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("cac phan tu trong mang la\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", mang[i]);
    }
    return 0;
}

