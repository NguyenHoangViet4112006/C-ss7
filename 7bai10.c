#include <stdio.h>

int main() {
    int n;
    printf("nhap so phan tu cua mang ");
    scanf("%d", &n);

    int arr[n];

    printf("nhap cac phan tu cua mang\n");
    for (int i = 0; i < n; i++) {
        printf("phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("cac phan tu la so nguyen to trong mang la \n");
    for (int i = 0; i < n; i++) {
        int songuyento = 1;
        if (arr[i] <= 1) {
            songuyento = 0;
        } else {
            for (int j = 2; j <= arr[i] / 2; j++) {
                if (arr[i] % j == 0) {
                    songuyento = 0;
                    break;
                }
            }
        }
        if (songuyento) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

