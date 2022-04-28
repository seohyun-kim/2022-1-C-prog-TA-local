#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 전역변수 , 지역변수
// auto, static, volatile, register, extern




// 팩토리얼을 순환호출(Recursion)로 해보기
#if 0

long factorial(int n) {

	if (n <= 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main() {
	int n = 5;

	printf("%d! 은 %d 입니다.\n", n, factorial(n));

	return 0;
}


#endif




// 하노이탑 순환호출
// https://vidkidz.tistory.com/649 시뮬레이션 게임
#if 0

int count = 0;

void hanoi(int n, char from, char tmp, char to) {

	if (n == 1) {
		printf("원판 1을 %c에서 %c로 옮긴다.\n", from, to);
		count++;
	}
	else {
		hanoi(n - 1, from, to, tmp);
		printf("원판 %d을 %c에서 %c로 옮긴다.\n", n, from, to);
		count++;
		hanoi(n - 1, tmp, from, to);
	}
}

int main() {

	hanoi(5, 'A', 'B', 'C');
	printf(" count = %d", count);
	return 0;
}


#endif



// 로그인 시 아이디를 검사하는 함수 만들기
// 정적변수 이용 ( p. 410 프로그래밍 3번 문제)
#if 0

int check(int yourPW) {
	static int count = 0;
	count++;

	if (count > 3) {
		printf("로그인 시도 횟수 초과\n");
	}

	if (yourPW == 1234) {
		printf("비밀번호가 일치합니다 :)\n");
		return 1;
	}
	else {
		printf("비밀번호가 틀렸습니다 :< \n");
		return 0;
	}

}

int main() {


	int pw = 0;

	while (1) {
		scanf("%d", &pw);
		if(check(pw) == 1) break;
	}
}



#endif




// 1~n 까지 합을 더하는 프로그램 (1+2+3+ ... +n) 
// 순환호출 이용
// p. 411 프로그래밍 문제 5번
#if 0
int sum(int n) {

	if (n <= 1) {
		return 1;
	}
	else {
		return n + sum(n - 1);
	}
	
}

int main() {

	int n = 10;

	printf("%d", sum(n));
	return 0;
}
#endif



