#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Nhap phan tu thu %d (luu y phan tu nhap vao phai la so le): ", i + 1);
            scanf("%d", &arr[i]);
            if (arr[i] % 2 != 0) {
                break;
            }
            printf("Phan tu vua nhap khong phai so le, hay nhap lai\n");
        }
    }
    return 0;
}

