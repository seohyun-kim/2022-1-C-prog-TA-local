#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*

	함수 cnt_prime은

	2보다 큰 양의 정수 int argument 1개를 입력으로 받아,
	자신보다 작은 양의 정수들 중에서 소수인 것들의 개수를 반환

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


//-------------  아래로는 고치지 마세요 ----------

int main(void) {

	int a;
	scanf("%d", &a);

	printf("%d", cnt_prime(a));

	return 0;
}