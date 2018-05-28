#pragma once

#include <stdio.h>
#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include <vector>
#include <random>

#define RANDOM 500

unsigned int SWAP_TIME = 0;

using namespace std;

//////////////////////////////////////////////////
////// 以下作成にあたって使っていい関数 //////
//////////////////////////////////////////////////

// 配列のm番目とn番目を交換します
/// @para:ar[] 対象の配列
/// @para:m 交換対象
/// @para:n 交換対象
void Swap(vector<int> &ar, unsigned int m, unsigned int n);

// 配列のm番目の要素をn番目に移動します
/// @para:ar[] 対象の配列
/// @para:m 移動対象
/// @para:n 移動先
void Move(vector<int> &ar, unsigned int m, unsigned int n);

// 配列のサイズを返します
/// @para:ar 対象の配列
/// @ret:unsigned int サイズ
int Size(const vector<int> &ar);

// 配列の内容を表示します
/// @para:ar 対象の配列
void PrintAll(const vector<int> &ar);
