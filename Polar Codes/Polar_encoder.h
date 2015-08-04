#ifndef POLAR_ENCODER_H
#define POLAR_ENCODER_H

#include"Polar.h"
#include"InfoSource.h"
#include<vector>

class Polar_encoder : public Polar
{
public:
	Polar_encoder(const std::vector<uint> &bits, double code_rate = 0.5);
	Polar_encoder(const InfoSource &src, double code_rate = 0.5);
	~Polar_encoder();
	void Encode();

public:
	std::vector<uint> infoBits;	//��Ϣ����
	std::vector<uint> infoBitsAddPattern;	//codeword = ���ɾ��� * infoBitsAddPattern
	std::vector<uint> codeword;	//����

public:
//	uint inv_permutation(uint pos);
	std::vector<uint> set_info_using_pattern(const std::vector<uint>& info);
//	std::vector<uint> unpermutated_codeword;
};

#endif