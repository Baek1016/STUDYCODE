#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("문자열을 입력하세요: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // 대문자를 소문자로 변환
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // 소문자를 대문자로 변환
        }
    }

    printf("변환된 문자열: %s", str);

    return 0;
}
