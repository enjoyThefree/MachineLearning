#pragma once
#include"Header.h"
#include"InLayer.h"
#include"HiddenLayer.h"
#include"OutLayer.h"

#define InNodeNum 2		// �����ڵ���
#define HiddenNodeNum 4    // ���ز�ڵ��� 
#define OutNodeNum 1		// �����ڵ���
#define TotalLayer 3

typedef struct sample {
	std::vector<double> inputData;
	std::vector<double> outputData;
}Sample;


class BPNet
{
public:
	BPNet() {};
	BPNet(std::string &filenamne);   //���캯������ʼ�� Ȩ��
	void forwardPropagation();
	void BackPropagation();
	void train(std::vector<Sample> sampleGroup);
	void prediction(std::vector<Sample> testGroup);
	~BPNet(){}
private:
	double error; //�����
	double LearnStep = 0.1;   // ѧϰ��
	std::vector<InLayer>* inLayerNode;
	std::vector<HiddenLayer>* hiddenLayerNode;   // һ�����ز㣬������ز���þ���arma::mat
	std::vector<OutLayer>* outLayerNode;

private:
	void InputInitW(std::vector<InLayer> &inLayer);
	void HiddenInitW(std::vector<HiddenLayer>& hiddenLayer);

	void ReadInputData();
};

