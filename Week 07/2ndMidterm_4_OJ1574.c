#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*

	함수 do_mycomb는

	양의 정수 int argument 2개를 입력으로 받아,
	combination을 계산하여 반환

	a와 b가 입력되면, (a > b)

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

//-------------  아래로는 고치지 마세요 ----------

int main(void) {

	int a;
	int b;
	scanf("%d %d", &a, &b);

	printf("%d", do_mycomb(a, b));

	return 0;
}