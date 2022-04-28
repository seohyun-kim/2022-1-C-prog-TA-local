#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �������� , ��������
// auto, static, volatile, register, extern




// ���丮���� ��ȯȣ��(Recursion)�� �غ���
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

	printf("%d! �� %d �Դϴ�.\n", n, factorial(n));

	return 0;
}


#endif




// �ϳ���ž ��ȯȣ��
// https://vidkidz.tistory.com/649 �ùķ��̼� ����
#if 0

int count = 0;

void hanoi(int n, char from, char tmp, char to) {

	if (n == 1) {
		printf("���� 1�� %c���� %c�� �ű��.\n", from, to);
		count++;
	}
	else {
		hanoi(n - 1, from, to, tmp);
		printf("���� %d�� %c���� %c�� �ű��.\n", n, from, to);
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



// �α��� �� ���̵� �˻��ϴ� �Լ� �����
// �������� �̿� ( p. 410 ���α׷��� 3�� ����)
#if 0

int check(int yourPW) {
	static int count = 0;
	count++;

	if (count > 3) {
		printf("�α��� �õ� Ƚ�� �ʰ�\n");
	}

	if (yourPW == 1234) {
		printf("��й�ȣ�� ��ġ�մϴ� :)\n");
		return 1;
	}
	else {
		printf("��й�ȣ�� Ʋ�Ƚ��ϴ� :< \n");
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




// 1~n ���� ���� ���ϴ� ���α׷� (1+2+3+ ... +n) 
// ��ȯȣ�� �̿�
// p. 411 ���α׷��� ���� 5��
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



