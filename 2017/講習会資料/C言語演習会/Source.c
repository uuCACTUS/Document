#include <stdio.h>
#include <math.h>

/** 
	�ċA���g�����͔͉𓚂ł�
	�}�[�W�\�[�g��񕪒T���؂��Q�l�ɂ��Ă��܂�
**/

/** 
	y:���݂̃��x��
	n:�ڕW�̃��x��
	m:�`����
**/
void Merge(int y, int n, int m) {

	if (y > n) return; // �ڕW���x���𒴂�����

	if (y == n) { // �ڕW���x���ɗ�����
		for (int i = 0; i < m; i++) {
			printf("*"); // ����ȏ㕪�����Ȃ��̂ŕ`��
		}
		return;
	}

	Merge(y + 1, n, m/3); // ���̎}���Ăяo��

	for (int i = 0; i < m/3; i++) {
		printf("-"); // ���̎}�ƉE�̎}�̊Ԃ�-��`��
	}
	
	Merge(y + 1, n, m/3); // �E�̎}��`��

}

/**
	n:�i��
	m:���̌�
**/
void Cantor(int n, int m) {

	for (int i = 0; i < n; i++) {
		Merge(n - i, n, m );

		printf("\n");
		// ���݂̃��x���������Ď��̍s������
	}

}

int main(void) {

	int n;
	scanf("%d", &n);

	Cantor(n, (int)pow(3, n - 1));

	return 0;
}



