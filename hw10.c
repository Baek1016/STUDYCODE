#include <stdio.h>

// 도시 정보를 저장할 구조체 정의
struct City {
    char name[50];
    char country[50];
    int population;
};

int main() {
    struct City cities[3]; // 3개의 도시 정보를 저장할 배열

    // 사용자로부터 3개의 도시 정보 입력받기
    for (int i = 0; i < 3; i++) {
        printf("Input city %d:\n", i + 1);
        printf("Name> ");
        scanf("%s", cities[i].name);
        printf("Country> ");
        scanf("%s", cities[i].country);
        printf("Population> ");
        scanf("%d", &cities[i].population);
    