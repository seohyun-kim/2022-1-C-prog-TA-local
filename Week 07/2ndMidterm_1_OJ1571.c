#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	�Լ� bigger�� �����Ͻÿ�.

	int argument 2���� �Է����� �޾�,
	�� �� ū ���� ��ȯ.

	�� ���� ���� ���� � ���� ��ȯ�ص� ������.

*/

int bigger(int a, int b) {

	return a > b ? a : b;
}

//-------------  �Ʒ��δ� ��ġ�� ������ ----------

int main(void) {

	int a;
	int b;
	scanf("%d %d", &a, &b);

	printf("%d", bigger(a, b));

	return 0;
}