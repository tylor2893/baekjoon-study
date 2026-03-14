#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	unsigned long long A;
	unsigned long long B;
	unsigned long long C;
	scanf("%llu %llu %llu", &A, &B, &C);
	printf("%llu", A + B + C);
}