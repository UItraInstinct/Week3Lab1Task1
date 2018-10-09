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

#include <string>

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
		void setModMark1(int modMark1);
		int getModMark1() const;
		void setModMark2(int modMark2);
		int getModMark2() const;
		void setModMark3(int modMark3);
		int getModMark3() const;
		void toString() const;
		std::string caluclateClassification() const;

	private:
		std::string name_;
		std::string regID_;
		std::string course_;
		int year_;
		int modMark1_;
		int modMark2_;
		int modMark3_;
};