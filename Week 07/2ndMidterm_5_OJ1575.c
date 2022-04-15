#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*

	함수 is_prime은

	2보다 큰 양의 정수 int argument 1개를 입력으로 받아,
	소수이면 1, 아니면 0을 반환


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
//-------------  아래로는 고치지 마세요 ----------

int main(void) {

	int a;
	scanf("%d", &a);

	printf("%d", is_prime(a));

	return 0;
}