#include "header.h"

float getMass()
{
	float massInput;
	std::cout << "Enter mass:" << std::endl;
	std::cin >> massInput;
	return massInput;
};

float convLBStoKG(float massInput)
{
	float dummy = massInput * 0.45359237;
	return dummy;
};

float convKGtoLBS(float massInput)
{
	float dummy = massInput / 0.45359237;
	return dummy;
};