#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	�Լ� biggest��

	int argument 3���� �Է����� �޾�,
	���� ū ���� ��ȯ

*/
int biggest(int a, int b, int c) {
	int max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	return max;
}
//-------------  �Ʒ��δ� ��ġ�� ������ ----------

int main(void) {

	int a;
	int b;
	int c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d", biggest(a, b, c));

	return 0;
}