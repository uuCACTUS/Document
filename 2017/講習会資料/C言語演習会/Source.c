#include <stdio.h>
#include <math.h>

/** 
	再帰を使った模範解答です
	マージソートや二分探索木を参考にしています
**/

/** 
	y:現在のレベル
	n:目標のレベル
	m:描く個数
**/
void Merge(int y, int n, int m) {

	if (y > n) return; // 目標レベルを超えた時

	if (y == n) { // 目標レベルに来た時
		for (int i = 0; i < m; i++) {
			printf("*"); // それ以上分解しないので描画
		}
		return;
	}

	Merge(y + 1, n, m/3); // 左の枝を呼び出し

	for (int i = 0; i < m/3; i++) {
		printf("-"); // 左の枝と右の枝の間に-を描画
	}
	
	Merge(y + 1, n, m/3); // 右の枝を描画

}

/**
	n:段数
	m:横の個数
**/
void Cantor(int n, int m) {

	for (int i = 0; i < n; i++) {
		Merge(n - i, n, m );

		printf("\n");
		// 現在のレベルを下げて次の行を処理
	}

}

int main(void) {

	int n;
	scanf("%d", &n);

	Cantor(n, (int)pow(3, n - 1));

	return 0;
}



