#pragma once
#ifndef OUTPUTLAYER_H
#define OPUTPUTLAYER_H

class OutLayer {
public:

	double inputValue;   // z = sum(weight * x)
	double outputValue;  // a = sigmoid(z)����Ԥ�����

	double label;        // ѵ���ı�ǩ

	double delta = 0;        // ������Ԫ�ļ��������

};

#endif // !INPUTLAYER_H
