#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>


// nの階乗を返します
/// @para:n 計算する階乗
/// @ret:int 計算結果
int factorial(int n) {

	if (n == 0) return 1;

	return factorial(n - 1) * n;
}


// エントリポイント
int main()
{
	// nの階乗を計算する
	int n, result = 0;

	scanf("%d", &n); 
	result = factorial(n);

	assert(result == 6);// テストケース1
	printf("%d! = %d\n", n, result);

	scanf("%d", &n);
	result = factorial(n);

	assert(result == 5040); // テストケース2
	printf("%d! = %d\n", n, result);

	scanf("%d", &n); 
	result = factorial(n);

	assert(result == 1); // テストケース3
	printf("%d! = %d\n", n, result);

	scanf("%d", &n); 
	result = factorial(n);

	assert(result == 362880); // テストケース4
	printf("%d! = %d\n", n, result);

	printf("Passed all tests.\n");

	return 0;
}

