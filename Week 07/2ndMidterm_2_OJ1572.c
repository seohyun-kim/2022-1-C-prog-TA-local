#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	�Լ� add�� �����Ͻÿ�.

	int argument 2���� �Է����� �޾�,
	�� ���� ���� ��ȯ

*/
int add(int a, int b) {

	return a + b;
}

//-------------  �Ʒ��δ� ��ġ�� ������ ----------

int main(void) {

	int a;
	int b;
	scanf("%d %d", &a, &b);

	printf("%d", add(a, b));

	return 0;
}


