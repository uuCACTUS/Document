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
////// �ȉ��쐬�ɂ������Ďg���Ă����֐� //////
//////////////////////////////////////////////////

// �z��̖����ɗv�f��ǉ����܂�
/// @para:ar �Ώۂ̔z��
/// @para:m �v�f
void Push(vector<int> &ar, int n);

// �z������������܂�
void Clear(vector<int> &ar);

// �z��̃T�C�Y��Ԃ��܂�
/// @para:ar �Ώۂ̔z��
/// @ret:unsigned int �T�C�Y
int Size(const vector<int> &ar);

// �z��̓��e��\�����܂�
/// @para:ar �Ώۂ̔z��
void PrintAll(const vector<int> &ar);

// x��y���Ԃ��܂�
/// @para:x
/// @para:y
int Pow(int x, int y) {
	return (int)pow((double)x, (double)y);
}
