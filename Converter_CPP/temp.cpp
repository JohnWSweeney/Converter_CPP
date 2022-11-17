#include "header.h"

float GetTemp()
{
	float tempInput;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Enter temperature:" << std::endl;
	std::cin >> tempInput;
	return tempInput;
};

float convFtoC(float tempInput)
{
	float tempResult = (tempInput - 32) * 5 / 9;
	return tempResult;
};

float convCtoF(float tempInput)
{
	float tempResult = tempInput * 9 / 5 + 32;
	return tempResult;
};