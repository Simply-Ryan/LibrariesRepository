#include <iostream>
#include <string>
#include <stdlib.h>
#include "pch.h"
#include "framework.h"

// String Management Section

std::string toLower(std::string str)
{
	for (int i = 0; i <= str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}

	return str;
}

std::string toUpper(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}

	return str;
}

std::string charReplace(std::string str, const char& findC, const char& replaceC)
{
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (str[i] == findC)
		{
			str[i] = replaceC;
		}
	}
}

unsigned int countChar(const std::string& str, const char& c)
{
	unsigned int count = 0;

	for (unsigned int i = 0; i < str.length(); ++i) 
	{
		if (str[i] == c) 
		{
			count++;
		}
	}

	return count;
}

int sumASCII(const std::string& str)
{
	unsigned int sumASCII = NULL;
	
	for (unsigned int i = 0; i < str.length(); i++)
	{
		sumASCII += int(str[i]);
	}

	return sumASCII;
}

// Mathematics Section

double toPower(double num, const int& pwr)
{
	double pwrNum = num;
	
	for (int i = 1; i < pwr; i++)
	{
		num = num * pwrNum;
	}

	return num;
}

double toRoot(double num, const int& root)
{
	double rootNum = num;

	for (int i = 1; i < rootNum; i++)
	{
		num = num / rootNum;
	}

	return num;
}

// Other Functions

void LoadingAnimation(const std::string& str, const std::string& postFunction, const unsigned int& milliseconds)
{
	std::cout << str;
	_sleep(milliseconds);
	std::cout << '.';
	_sleep(milliseconds);
	std::cout << '.';
	_sleep(milliseconds);
	std::cout << '.' << "\n";
	_sleep(milliseconds);
	std::cout << postFunction << "\n";
}