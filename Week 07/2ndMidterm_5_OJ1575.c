#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	�Լ� is_prime��

	2���� ū ���� ���� int argument 1���� �Է����� �޾�,
	�Ҽ��̸� 1, �ƴϸ� 0�� ��ȯ


*/
int is_prime(int input)
{
    int i;
    for (i = 2; i < input; i++) {
        if (input % i == 0) {
            return 0;
        }
    }
    return 1;
}
//-------------  �Ʒ��δ� ��ġ�� ������ ----------

int main(void) {

	int a;
	scanf("%d", &a);

	printf("%d", is_prime(a));

	return 0;
}