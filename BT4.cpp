#include <stdio.h>

int main() {
    int SoNhap;

    do {
        printf("Nhap mot so nguyen duong tu 1 den 10: ");
        scanf("%d", &SoNhap);
    } while (SoNhap < 1 || SoNhap > 10);

    printf("Bang cuu chuong cua %d:\n", SoNhap);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", SoNhap, i, SoNhap * i);
    }

    return 0;
}
