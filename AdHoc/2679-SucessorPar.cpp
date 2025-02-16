#include <stdio.h>

int main() {
    unsigned int x;
    scanf("%d", &x);
    ++x;
    if (x % 2 != 0) ++x;
    printf("%d\n", x);

    return 0;
}