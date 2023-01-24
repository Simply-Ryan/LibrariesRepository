#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

// Return a lowercase version of a string
std::string toLower(std::string str);

// Return an uppercase version of a string
std::string toUpper(std::string str);

// Replace a character from a string and return
std::string charReplace(std::string str, const char& findC, const char& replaceC);

// Return a count of the number of occurences of a character in a string
unsigned int countChar(const std::string& str, const char& c);

// Return the sum of the ASCII Values of each character in a string
int sumASCII(const std::string& str);

// Return the raise of a number to a certain power
double toPower(double num, const int& pwr);

// Return the reduction of a number to a certain power
double toRoot(double num, const int& root);

// Make a loading animation in the console
void LoadingAnimation(const std::string& str, const std::string& postFunction, const unsigned int& milliseconds);