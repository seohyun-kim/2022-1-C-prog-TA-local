/*
�¶��� ���� 1088: [����-����] �������� ���ؾ��ұ�?
http://eseoj.inu.ac.kr/JudgeOnline/problem.php?id=1088
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, i=1, sum=0;
	scanf("%d", &n);

	while (sum < n) {
		sum += i;
		i++;
	}
	printf("%d", i-1);
	return 0;
}
