#include "header.h"

void start()
{
	std::cout << std::fixed << std::setprecision(1);
	bool loop = true;
	std::cout << "Welcome to Sweeney's Converter Tool" << std::endl;
	while (loop == true)
	{
		int userInput;
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "Enter \"1\" to convert temperature or" << std::endl;
		std::cout << "or \"2\" to convert mass." << std::endl;
		std::cin >> userInput;
		while (userInput != 1 && userInput != 2)
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Try again dummy." << std::endl;
			std::cin >> userInput;
		}

		if (userInput == 1) // Temperature
		{
			tempConvSel();
		}
		else if (userInput == 2) // Mass
		{
			massConvSel();
		}
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "Enter \"1\" to do another calculation" << std::endl;
		std::cout << "or \"0\" to close the application." << std::endl;
		std::cin >> userInput;
		while (userInput != 1 && userInput != 0)
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Try again dummy." << std::endl;
			std::cin >> userInput;
		}

		if (userInput == 1)
		{
			loop = true;
		}
		else if (userInput == 0)
		{
			loop = false;
		}
	}
}

int tempConvSel()
{
	int userInput;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Enter \"1\" to convert Fahrenheit to Celcius" << std::endl;
	std::cout << "or \"2\" to convert Celcius to Fahrenheit." << std::endl;
	std::cin >> userInput;
	while (userInput != 1 && userInput != 2)
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Try again dummy." << std::endl;
		std::cin >> userInput;
	}

	if (userInput == 1)
	{
		float tempInput = GetTemp();
		float tempResult = convFtoC(tempInput);
		std::cout << "-------------------------------------" << std::endl;
		std::cout << tempInput << " deg F is " << tempResult << " deg C" << std::endl;
		return 0;
	}
	else if (userInput == 2)
	{
		float tempInput = GetTemp();
		float tempResult = convCtoF(tempInput);
		std::cout << "-------------------------------------" << std::endl;
		std::cout << tempInput << " deg C is " << tempResult << " deg F" << std::endl;
		return 0;
	}
};

int massConvSel()
{
	int userInput;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Enter \"1\" to convert lbs to kg" << std::endl;
	std::cout << "or \"2\" to convert kg to lbs." << std::endl;
	std::cin >> userInput;
	while (userInput != 1 && userInput != 2)
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Try again dummy." << std::endl;
		std::cin >> userInput;
	}

	if (userInput == 1)
	{
		float massInput = getMass(); 
		float massResult = convLBStoKG(massInput);
		std::cout << "-------------------------------------" << std::endl;
		std::cout << massInput << " lbs is " << massResult << " kg" << std::endl;
		return 0;
	}
	else if (userInput == 2)
	{
		float massInput = getMass();
		float massResult = convKGtoLBS(massInput);
		std::cout << "-------------------------------------" << std::endl;
		std::cout << massInput << " kg is " << massResult << " lbs" << std::endl;
		return 0;
	}

};