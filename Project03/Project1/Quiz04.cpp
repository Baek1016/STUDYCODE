#include <stdio.h>

int main() {

	int a;
	char b;

	printf("������ �Է��ϼ���:");
	scanf_s("%d", &a);
	printf("%c\n", a);

	printf("���ڸ� �Է��ϼ���: "); 
	scanf_s(" %c", &b,sizeof(b));
	printf("%d\n", b);

	return 0;
}