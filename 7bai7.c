#include <stdio.h>

int main() {
    int n;
    printf("nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    printf("nhap cac phan tu la so le\n");
    for(int i = 0; i < n; i++) {
        printf("phan tu %d: ", i + 1);
        scanf("%d", &array[i]);
        if(array[i] % 2 == 0) {
            printf("hay nhap so le\n");
            i--;
        }
    }
    printf("cac phan tu cua mang la ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

