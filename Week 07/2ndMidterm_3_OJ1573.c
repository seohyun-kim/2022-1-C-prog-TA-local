#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	�Լ� do_myfact��

	���� ���� int argument 1���� �Է����� �޾�,
	factorial�� ����Ͽ� ��ȯ�Ѵ�.

	n�� �ԷµǸ� --> 1 x 2 x ... x n �� ��ȯ


*/
int do_myfact(int a) {

	int result = 1;
	for (int i = 1; i <= a; i++)
	{
		result *= i;
	}
	return result;
}

//-------------  �Ʒ��δ� ��ġ�� ������ ----------

int main(void) {

	int a;
	scanf("%d", &a);

	printf("%d", do_myfact(a));

	return 0;
}