// http://eseoj.inu.ac.kr/JudgeOnline/problem.php?id=1135
// 1135: [C��� ��������] ��� �߿��� �Ҽ��� �͵鸸 ����ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int n) {
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0) { //����ΰ�
			if (is_prime(i)) {
				printf("%d ", i);
			}
		}
	}

	return 0;
}