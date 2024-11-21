#include <stdio.h>
#include <math.h>

#define SIZE 5

// 표준편차를 계산하는 함수
double calculateStandardDeviation(double arr[], int size) {
    double mean = 0, variance = 0, stddev;

    // 평균 계산
    for (int i = 0; i < size; i++) {
        mean += arr[i];
    }
    mean /= size;

    // 분산 계산
    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= size;

    // 표준편차 계산
    stddev = sqrt(variance);
    return stddev;
}

int main() {
    double numbers[SIZE];
    printf("Enter %d real numbers: ", SIZE);

    // 사용자 입력
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &numbers[i]);
    }

    // 표준편차 계산
    double stddev = calculateStandardDeviation(numbers, SIZE);

    // 결과 출력
    printf("Standard Deviation = %.3f\n", stddev);

    return 0;
}
