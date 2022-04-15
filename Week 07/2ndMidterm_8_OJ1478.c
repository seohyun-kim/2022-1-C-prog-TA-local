#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	함수 biggest는

	int argument 3개를 입력으로 받아,
	가장 큰 수를 반환

*/
int biggest(int a, int b, int c) {
	int max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	return max;
}
//-------------  아래로는 고치지 마세요 ----------

int main(void) {

	int a;
	int b;
	int c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d", biggest(a, b, c));

	return 0;
}