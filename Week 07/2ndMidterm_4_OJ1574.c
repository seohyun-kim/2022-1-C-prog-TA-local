#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*

	�Լ� do_mycomb��

	���� ���� int argument 2���� �Է����� �޾�,
	combination�� ����Ͽ� ��ȯ

	a�� b�� �ԷµǸ�, (a > b)

	a! / ( (a-b)! b!)


*/
int do_myfact(int a) {

	int result = 1;
	for (int i = 1; i <= a; i++)
	{
		result *= i;
	}
	return result;
}

int do_mycomb(int a, int b) {
	return do_myfact(a) / (do_myfact(a - b) * do_myfact(b));
}

//-------------  �Ʒ��δ� ��ġ�� ������ ----------

int main(void) {

	int a;
	int b;
	scanf("%d %d", &a, &b);

	printf("%d", do_mycomb(a, b));

	return 0;
}