#pragma once

#include <stdio.h>
#include <assert.h>
#include <stack>

// ハノイの塔を立てるための塔1つを表すクラス
class TowerOfHanoi : public std::stack<int> {

public:
	char _name; // 塔の順番を表す

	// 小さい円盤の上に大きい円盤が乗っていないかチェックします
	/// @ret:bool 正常 = true,それ以外 = false
	bool CheckDisk();

	TowerOfHanoi(char name) :_name(name) {};

};


//////////////////////////////////////////////////
////// 以下作成にあたって使っていい関数 //////
//////////////////////////////////////////////////


// xの塔からyの塔へ円盤を移動します
// 自身より小さい円盤の上に移動しようとするとエラー
/// @para:x 移動元の塔
/// @para:y 移動先の塔
void move(TowerOfHanoi &x, TowerOfHanoi &y);


// 塔xが空かどうかを返します
/// @para:x 塔
/// @ret:bool 空 = true,それ以外 = false
bool empty(const TowerOfHanoi &x);


// 塔xに積まれている円盤の数を返します
/// @para:x 塔
/// @ret:int 積まれている数
bool size(const TowerOfHanoi &x);


// 塔xの内容を表示します
/// @para:x 表示する塔
void print(TowerOfHanoi x);


// 塔x,y,zの内容を表示します
/// @para:x 表示する塔
/// @para:y 表示する塔
/// @para:z 表示する塔
void print_all(const TowerOfHanoi x, const TowerOfHanoi y, const TowerOfHanoi z);
