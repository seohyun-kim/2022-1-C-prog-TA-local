#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	함수 do_myfact는

	양의 정수 int argument 1개를 입력으로 받아,
	factorial을 계산하여 반환한다.

	n이 입력되면 --> 1 x 2 x ... x n 을 반환


*/
int do_myfact(int a) {

	int result = 1;
	for (int i = 1; i <= a; i++)
	{
		result *= i;
	}
	return result;
}

//-------------  아래로는 고치지 마세요 ----------

int main(void) {

	int a;
	scanf("%d", &a);

	printf("%d", do_myfact(a));

	return 0;
}