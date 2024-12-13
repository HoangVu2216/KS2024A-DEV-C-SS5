#include <stdio.h>

int main() {
    int SoChoTruoc = 1212, SoNhap;
    do {
        printf("Hay doan so cho truoc ? ");
        scanf("%d", &SoNhap);
    } while (SoNhap != SoChoTruoc);
    printf("Ban da nhap dung so!\n");
    return 0;
}
 
