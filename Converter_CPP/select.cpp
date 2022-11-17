#include<iostream>
#include<string>
#include "select.h"
#include "temp.h"
#include "mass.h"

int unitSel()
{
	std::string unit;
	std::cout << "Enter temp or mass." << std::endl;
	std::cin >> unit;

	if (unit == "temp")
	{
		tempConvSel();
		return 0;
	}
	else if (unit == "mass")
	{
		massConvSel();
		return 0;
	}
	else
	{
		std::cout << "Try again dummy. Enter temp or mass." << std::endl;
		return -1;
	}
};

int tempConvSel()
{
	std::string tempSel;
	std::cout << "Enter FtoC or CtoF." << std::endl;
	std::cin >> tempSel;

	if (tempSel == "FtoC")
	{
		float tempInput = GetTemp();
		float tempResult = convFtoC(tempInput);
		std::cout << tempInput << " deg F is " << tempResult << " deg C\n" << std::endl;
		return 0;
	}
	else if (tempSel == "CtoF")
	{
		float tempInput = GetTemp();
		float tempResult = convCtoF(tempInput);
		std::cout << tempInput << " deg C is " << tempResult << " deg F\n" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Try again dummy. Enter FtoC or CtoF." << std::endl;
		return -1;
	}
};

int massConvSel()
{
	std::string massSel;
	std::cout << "Enter lbs or kg" << std::endl;
	std::cin >> massSel;

	if (massSel == "lbs")
	{
		float massInput = getMass(); 
		float massResult = convLBStoKG(massInput);
		std::cout << massInput << " lbs is " << massResult << " kg\n" << std::endl;
		return 0;
	}
	else if (massSel == "kg")
	{
		float massInput = getMass();
		float massResult = convKGtoLBS(massInput);
		std::cout << massInput << " kg is " << massResult << " lbs\n" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Try again dummy. Enter lbs or kg." << std::endl;
		return -1;
	}

};