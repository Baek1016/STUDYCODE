#include <stdio.h>

int main() {

	int a;
	char b;

	printf("정수를 입력하세요:");
	scanf_s("%d", &a);
	printf("%c\n", a);

	printf("문자를 입력하세요: "); 
	scanf_s(" %c", &b,sizeof(b));
	printf("%d\n", b);

	return 0;
}