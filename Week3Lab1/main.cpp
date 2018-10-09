/*
* Main.cpp
*
* Version Information: V0.0.1
* Author: Conor McCay
* Date: 09/10/2018
* Description:Main file
*
* Copyright Notice
*/

#include <string>
#include <iostream>
#include "Student.h"

using namespace std;

int main() {
	string result;
	Student conor("Conor McCay", "B00712462", "Computer Science", 2, 100, 100, 100);

	conor.toString();
	result = conor.caluclateClassification();

	cout << "\n" << result;

	return 0;
}