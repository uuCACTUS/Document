// Sort.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "Sort.h"

// 配列を降順にバブルソートします
/// @para:ar 対象の配列
void BubbleSort(vector<int> &ar) {

	for (int i = 0; i < Size(ar) - 1; i++) {
		for (int j = Size(ar) - 1; j > i; j--) {

			if (ar[j] < ar[j - 1]) {
				Swap(ar, j, j - 1);
				PrintAll(ar);
			}

		}
	}
	
}

// 配列を降順にバブルソートします (再帰で書けるかチャレンジ)
/// @para:ar 対象の配列
/// @para:m ソートする範囲(m番目からn番目)
/// @para:n ソートする範囲(m番目からn番目)
void BubbleSort(vector<int> &ar, unsigned int m, unsigned int n) {

	if (m == n) return;

	for (int i = Size(ar) - 1; i > m; i--) {

		if (ar[i] < ar[i - 1]) {
			Swap(ar, i, i - 1);
			PrintAll(ar);
		}

	}

	BubbleSort(ar, m + 1, n);
}


// 配列を降順に挿入ソートします
/// @para:ar 対象の配列
void InsertionSort(vector<int> &ar) {

	for (int i = 1; i < Size(ar); i++) {

		for (int j = 0; j < i; j++) {

			if (ar[j] > ar[i]) {
				Swap(ar, j, i);
				PrintAll(ar);
			}
		}
	}

}

// 配列を降順に挿入ソートします(再帰で書けるかチャレンジ)
/// @para:ar 対象の配列
/// @para:m 先頭からソート済みの範囲
void InsertionSort(vector<int> &ar, unsigned int m) {

	if (Size(ar) == m) return;

	for (int i = 0; i < m; i++) {
			if (ar[i] > ar[m]) {
				Swap(ar, i, m);
				PrintAll(ar);
			}
		}

	InsertionSort(ar, m + 1);
}


// エントリポイント
int main()
{
	int num; // 要素数
	random_device rnd; // 乱数生成用

	printf("要素数を入力：");
	scanf("%d", &num);

	assert(num > 0);

	vector<int> my_array(num); // ソート対象

	for (auto &obj : my_array) obj = rnd() % RANDOM; // 乱数を与える

	PrintAll(my_array);

	BubbleSort(my_array); // 降順ソート
	//BubbleSort(my_array, 0, Size(my_array) - 1); // 再帰用
	//InsertionSort(my_array);
	//InsertionSort(my_array,1);

	PrintAll(my_array);

	int check = 0;
	for (auto obj : my_array) {
		assert(check <= obj); // 降順かどうかチェック
		check = obj;
	}

	printf("Passed all tests.\n");
	//printf("(%d swaps)\n",SWAP_TIME);

	return 0;
}


void Swap(vector<int> &ar, unsigned int m, unsigned int n) {

	assert(0 <= m && m < ar.size());
	assert(0 <= n && n < ar.size());

	int temp;

	// ar[m]とar[n]を入れ替え
	temp = ar[m];
	ar[m] = ar[n];
	ar[n] = temp;

	// この一行だけでも入れ替えできる(XORスワップ)
	//ar[m] ^= ar[n] ^= ar[m] ^= ar[n];

	SWAP_TIME++;
}


void Move(vector<int> &ar, unsigned int m, unsigned int n) {

	assert(0 <= m && m < ar.size());
	assert(0 <= n && n < ar.size());

	ar.insert(ar.begin() + m, ar[n]);
	ar.erase(ar.begin() + n + 1);

}


int Size(const vector<int> &ar) {

	return ar.size();
}


void PrintAll(const vector<int> &ar) {

	for (auto obj : ar) {

		printf("[%d]", obj);
	}

	printf("\n");
}
