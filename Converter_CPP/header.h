#pragma once
#include<iostream>
#include<iomanip>
#include<string>

void start();
int tempConvSel();
int massConvSel();

float GetTemp();
float convFtoC(float tempInput);
float convCtoF(float tempInput);

float getMass();
float convLBStoKG(float massInput);
float convKGtoLBS(float massInput);