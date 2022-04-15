#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	함수 add를 구현하시오.

	int argument 2개를 입력으로 받아,
	두 수의 합을 반환

*/
int add(int a, int b) {

	return a + b;
}

//-------------  아래로는 고치지 마세요 ----------

int main(void) {

	int a;
	int b;
	scanf("%d %d", &a, &b);

	printf("%d", add(a, b));

	return 0;
}


