#include <stdio.h>
#include <unistd.h>
int main() {
    for (int i = 100; i >= 1; i--) {
        printf("%d\n", i);
        usleep(10000);
    }
    return 0;
}

