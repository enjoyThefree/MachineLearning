#pragma once
#ifndef INPUTLAYER_H
#define INPUTLAYER_H

#include"Header.h"

class InLayer {
public:
	double bias = 1;              //ƫ��
	//double biasWeight;

	double inputValue;            // ѵ��������ֵ
	std::vector<double> weight;   // ����㵥����Ԫ�����ز�ÿ����Ԫ��Ȩ��

};

#endif // !INPUTLAYER_H