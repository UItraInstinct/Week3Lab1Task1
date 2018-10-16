/*
* Student.h
* 
* Version Information: V0.0.1
* Author: Conor McCay
* Date: 09/10/2018
* Description: Declaration of class Constructors, Getters, Setters, Functions and Variables
*
* Copyright Notice
*/

#pragma once

#include "Module.h"
#include <string>
#include <vector>

class Student {
	public:
		Student();
		explicit Student(std::string name);		
		Student(std::string name, std::string regID, std::string course, int year, int modMark1, int modMark2, int modMark3);
		void setName(std::string name);
		std::string getName() const;
		void setRegID(std::string regID);
		std::string getRegID() const;
		void setCourse(std::string course);
		std::string getCourse() const;
		void setYear(int year);
		int getYear() const;
		void toString() const;
		void addModule(std::string t, std::string c, int cp, int m);
		void updateModule(std::string c, Module m);
		void updateModule(std::string c, int mark);
		void updateModule(std::string c, int creditPoints);
		void updateModule(std::string c, std::string t);
		void deleteModule(std::string c);
		std::string caluclateClassification() const;

	private:
		std::string name_;
		std::string regID_;
		std::string course_;
		int year_;
		std::vector<Module> moduleMarks_;
};