#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*

	�Լ� cnt_prime��

	2���� ū ���� ���� int argument 1���� �Է����� �޾�,
	�ڽź��� ���� ���� ������ �߿��� �Ҽ��� �͵��� ������ ��ȯ

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

int cnt_prime(int arg) {
	int cnt = 0;

	for (int i = 2; i < arg; i++)
	{
		if (is_prime(i) == 1) {
			cnt++;
		}
	}


	return cnt;
}


//-------------  �Ʒ��δ� ��ġ�� ������ ----------

int main(void) {

	int a;
	scanf("%d", &a);

	printf("%d", cnt_prime(a));

	return 0;
}