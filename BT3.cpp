#include <stdio.h>

int main() {
    int SoNhap;
    int Tong = 0;

    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &SoNhap);
    } while (SoNhap <= 0);

    for (int i = 1; i <= SoNhap; i++) {
        Tong += i;
    }

    printf("Tong cac so tu 1 den %d la: %d\n", SoNhap, Tong);
    return 0;
}

