#pragma once

#include <stdio.h>
#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include <vector>
#include <random>

#define RANDOM 500

using namespace std;

//////////////////////////////////////////////////
////// 以下作成にあたって使っていい関数 //////
//////////////////////////////////////////////////

// 配列の末尾に要素を追加します
/// @para:ar 対象の配列
/// @para:m 要素
void Push(vector<int> &ar, int n);

// 配列を初期化します
void Clear(vector<int> &ar);

// 配列のサイズを返します
/// @para:ar 対象の配列
/// @ret:unsigned int サイズ
int Size(const vector<int> &ar);

// 配列の内容を表示します
/// @para:ar 対象の配列
void PrintAll(const vector<int> &ar);

// xのy乗を返します
/// @para:x
/// @para:y
int Pow(int x, int y) {
	return (int)pow((double)x, (double)y);
}
