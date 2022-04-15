#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	함수 bigger를 구현하시오.

	int argument 2개를 입력으로 받아,
	둘 중 큰 수를 반환.

	두 수가 같은 경우는 어떤 것을 반환해도 괜찮다.

*/

int bigger(int a, int b) {

	return a > b ? a : b;
}

//-------------  아래로는 고치지 마세요 ----------

int main(void) {

	int a;
	int b;
	scanf("%d %d", &a, &b);

	printf("%d", bigger(a, b));

	return 0;
}