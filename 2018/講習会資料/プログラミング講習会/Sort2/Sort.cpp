// Sort.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "Sort.h"

// 配列を昇順に基数ソートします
/// @para:ar 対象配列
/// @para:temp 作業用配列
/// @para:n ソート回数
/// @para:vector<int> ソート済み配列
vector<int> KisuSort(vector<int> ar, vector<vector<int>> temp, int n) {


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
	vector<vector<int>> temp_array(10); // 作業用

	for (auto &obj : my_array) obj = rnd() % RANDOM; // 乱数を与える

	PrintAll(my_array);

	my_array = KisuSort(my_array, temp_array, 1);

	PrintAll(my_array);

	int check = 0;
	for (auto obj : my_array) {
		assert(check <= obj); // 降順かどうかチェック
		check = obj;
	}

	printf("Passed all tests.\n");

	return 0;
}


void Push(vector<int> &ar, int n) {

	ar.push_back(n);
}


int Size(const vector<int> &ar) {

	if (ar.empty()) return 0;
	return ar.size();
}

void Clear(vector<int> &ar) {

	ar.clear();
}

void PrintAll(const vector<int> &ar) {

	for (auto obj : ar) {

		printf("[%d]", obj);
	}

	printf("\n");
}
