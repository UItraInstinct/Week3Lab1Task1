/*
* Student.cpp
*
* Version Information: V0.0.1
* Author: Conor McCay
* Date: 09/10/2018
* Description: Definition of class Constructors, Getters, Setters and Functions
*
* Copyright Notice
*/

#include "Module.h"
#include "Student.h"
#include <string>
#include <iostream>
#include <regex>
#include <vector>

Student::Student() {

}

Student::Student(std::string name)
	:name_{ name }{
}

Student::Student(std::string name, std::string regID, std::string course, int year, int modMark1, int modMark2, int modMark3)
	: name_{ name }, regID_{ regID }, course_{ course }, year_{ year } {

}

void Student::setName(std::string name) {
	name_ = name;
}

std::string Student::getName() const {
	return name_;
}

void Student::setRegID(std::string regID) {
	std::regex bcode{ R"('B''0''0'\d{6})" };

	try {
		if (regex_match(regID, bcode)) {
			regID_ = regID;
		}
		else {
			throw 1;
		}
	}
	catch(int err_code){
		std::cout << "Error code: " << err_code << ". Does not match regular expression!" << std::endl;
	}
}

std::string Student::getRegID() const {
	return regID_;
}

void Student::setCourse(std::string course) {
	course_ = course;
}

std::string Student::getCourse() const {
	return course_;
}

void Student::setYear(int year) {
	year_ = year;
}

int Student::getYear() const {
	return year_;
}

void Student::addModule(std::string t, std::string c, int cp, int m) {
	Module mod(t, c, cp, m);
	moduleMarks_.push_back(mod);
}

void Student::updateModule(std::string c, Module m) {

	for (int i = 0; i < moduleMarks_.size(); i++) {
		if (c == moduleMarks_[i].getCode()) {
			moduleMarks_[i] = m;
		}
	}
}

void Student::updateModule(std::string c, int mark) {

	for (int i = 0; i < moduleMarks_.size(); i++) {
		if (c == moduleMarks_[i].getCode()) {
			moduleMarks_[i].setMark(mark);
		}
	}
}

void Student::updateModule(std::string c, int creditPoints) {

	for (int i = 0; i < moduleMarks_.size(); i++) {
		if (c == moduleMarks_[i].getCode()) {
			moduleMarks_[i].setCreditPoints(creditPoints);
		}
	}
}

void Student::updateModule(std::string c, std::string t) {

	for (int i = 0; i < moduleMarks_.size(); i++) {
		if (c == moduleMarks_[i].getCode()) {
			moduleMarks_[i].setTitle(t);
		}
	}

}

void Student::deleteModule(std::string c) {
	int loops = 0;

	for (int i = 0; i < moduleMarks_.size(); i++) {
		if (c == moduleMarks_[i].getCode()){
			moduleMarks_.erase(moduleMarks_.begin() + i);
			loops++;
		}
	}

	if (loops != 0) {
		std::cout << "\n" << loops << " modules deleted.";
	}
	else {
		std::cout << "\nNo modules deleted.";
	}
}

void Student::toString() const {
	std::cout << "Student Name: " << Student::name_ << "\nStudent ID: " << Student::regID_ << "\nCourse: " << Student::course_ << "\nYear of Study: " << Student::year_;
}

std::string Student::caluclateClassification() const {
	double classification{ 0.0 };
	int sum{ 0 };

	classification = sum / 3;

	if (classification <= 39.0)
	{
		return "Fail\n";
	}
	else if (classification >= 40.0 && classification <= 49.0)
	{
		return "3rd Class\n";
	}
	else if (classification >= 50.0 && classification <= 59.0)
	{
		return "2nd Class\n";
	}
	else if (classification >= 60.0 && classification <= 69.0)
	{
		return "2-1\n";
	}
	else
	{
		return "1st\n";
	}

}