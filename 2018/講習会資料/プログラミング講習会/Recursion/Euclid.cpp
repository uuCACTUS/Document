#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>


// aとbの最大公約数を返します
/// @para:a 求めたい数
/// @para:a 求めたい数
/// @ret:int 計算結果
int gcd(int a, int b) {

	if (b == 0) return a;

	return gcd(b, a % b);
}

// エントリポイント
int main(void) {
	// aとbの最小公倍数を計算する
	int a, b, result = 0;

	scanf("%d %d", &a, &b);
	result = gcd(a,b);

	assert(result == 3);// テストケース1
	printf("gcd(%d,%d) = %d\n", a, b, result);

	scanf("%d %d", &a, &b);
	result = gcd(a, b);

	assert(result == 120); // テストケース2
	printf("gcd(%d,%d) = %d\n", a, b, result);

	scanf("%d %d", &a, &b);
	result = gcd(a, b);

	assert(result == 1); // テストケース3
	printf("gcd(%d,%d) = %d\n", a, b, result);

	scanf("%d %d", &a, &b);
	result = gcd(a, b);

	assert(result == 3); // テストケース4
	printf("gcd(%d,%d) = %d\n", a, b, result);

	printf("Passed all tests.\n");

	return 0;
}