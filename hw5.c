#include <stdio.h>

void binary(int num) {
    if (num == 0) {
        return;
    }
    binary(num / 2);
    printf("%d", num % 2);
}

int main() {
    int n;

    printf("양의 정수를 입력하시오: ");
    scanf("%d", &n);

    binary(n);
    printf("\n");

    return 0;
}
