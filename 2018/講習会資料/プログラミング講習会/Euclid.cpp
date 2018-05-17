#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>


// a��b�̍ő���񐔂�Ԃ��܂�
/// @para:a ���߂�����
/// @para:a ���߂�����
/// @ret:int �v�Z����
int gcd(int a, int b) {

	if (b == 0) return a;

	return gcd(b, a % b);
}

// �G���g���|�C���g
int main(void) {
	// a��b�̍ŏ����{�����v�Z����
	int a, b, result = 0;

	scanf("%d %d", &a, &b);
	result = gcd(a,b);

	assert(result == 3);// �e�X�g�P�[�X1
	printf("gcd(%d,%d) = %d\n", a, b, result);

	scanf("%d %d", &a, &b);
	result = gcd(a, b);

	assert(result == 120); // �e�X�g�P�[�X2
	printf("gcd(%d,%d) = %d\n", a, b, result);

	scanf("%d %d", &a, &b);
	result = gcd(a, b);

	assert(result == 1); // �e�X�g�P�[�X3
	printf("gcd(%d,%d) = %d\n", a, b, result);

	scanf("%d %d", &a, &b);
	result = gcd(a, b);

	assert(result == 3); // �e�X�g�P�[�X4
	printf("gcd(%d,%d) = %d\n", a, b, result);

	printf("Passed all tests.\n");

	return 0;
}