/*
* Module.h
*
* Version Information: V0.0.1
* Author: Conor McCay
* Date: 16/10/2018
* Description: Declaration of class Constructors, Getters, Setters and Functions
*
* Copyright Notice
*/

#pragma once

#include <string>

class Module {
	public:
		Module();
		Module(std::string title, std::string code, int creditPoints, int mark);
		void setTitle(std::string title);
		std::string getTitle() const;
		void setCode(std::string code);
		std::string getCode() const;
		void setCreditPoints(int creditPoints);
		int getCreditPoints() const;
		void setMark(int mark);
		int getMark() const;

	private:
		std::string title_;
		std::string code_;
		int creditPoints_;
		int mark_;
};