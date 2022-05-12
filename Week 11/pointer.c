#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a = 10;
	int b = 50;

	int* p = NULL;

	p = &a;

	printf("%d\n", a);
	printf("%X\n", p);
	printf("%d\n", *p);

	*p = 20;

	printf("%d\n", a);
	printf("%X\n", p);
	printf("%d\n", *p);


	p = &b;
	printf("%d\n", b);
	printf("%X\n", p);
	printf("%d\n", *p);



	return 0;
}