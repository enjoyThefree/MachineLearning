#pragma once
#ifndef HIDDENLAYER_H
#define HIDDENLAYER_H

#include"Header.h"

class HiddenLayer {
public:
	double bias = 1;  //ƫ��
	//double biasWeight;

	double inputValue;   // z = sum(weight * x)
	double outputValue;  // a = sigmoid(z)
	
	std::vector<double> weight;   // ���ز㵥����Ԫ����һ��ÿ����Ԫ��Ȩ��

	double delta = 0;        // ������Ԫ�ļ��������
};

#endif // !HIDDENLAYER_H
