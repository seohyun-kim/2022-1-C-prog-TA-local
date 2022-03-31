/*
온라인 저지 1088: [문법-종합] 언제까지 더해야할까?
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
