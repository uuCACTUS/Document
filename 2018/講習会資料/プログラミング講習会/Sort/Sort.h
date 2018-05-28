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
////// �ȉ��쐬�ɂ������Ďg���Ă����֐� //////
//////////////////////////////////////////////////

// �z���m�Ԗڂ�n�Ԗڂ��������܂�
/// @para:ar[] �Ώۂ̔z��
/// @para:m �����Ώ�
/// @para:n �����Ώ�
void Swap(vector<int> &ar, unsigned int m, unsigned int n);

// �z���m�Ԗڂ̗v�f��n�ԖڂɈړ����܂�
/// @para:ar[] �Ώۂ̔z��
/// @para:m �ړ��Ώ�
/// @para:n �ړ���
void Move(vector<int> &ar, unsigned int m, unsigned int n);

// �z��̃T�C�Y��Ԃ��܂�
/// @para:ar �Ώۂ̔z��
/// @ret:unsigned int �T�C�Y
int Size(const vector<int> &ar);

// �z��̓��e��\�����܂�
/// @para:ar �Ώۂ̔z��
void PrintAll(const vector<int> &ar);
