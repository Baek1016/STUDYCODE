#include <stdio.h>

int main() {
    double km, mile;

    printf("변환할 거리를 킬로미터(km) 단위로 입력하세요: ");
    scanf("%lf", &km);

    mile = km / 1.609; // 킬로미터를 마일로 변환

    printf("%.1lf km는 %.1lf mile입니다.\n", km, mile);

    return 0;
}
