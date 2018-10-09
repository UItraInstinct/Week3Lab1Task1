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

#include "Student.h"
#include <string>
#include <iostream>
#include <regex>

Student::Student() {

}

Student::Student(std::string name)
	:name_{ name }{
}

Student::Student(std::string name, std::string regID, std::string course, int year, int modMark1, int modMark2, int modMark3)
	: name_{ name }, regID_{ regID }, course_{ course }, year_{ year }, modMark1_{ modMark1 }, modMark2_{ modMark2 }, modMark3_{ modMark3 } {

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

void Student::setModMark1(int modMark1) {
	modMark1_ = modMark1;
}

int Student::getModMark1() const {
	return modMark1_;
}

void Student::setModMark2(int modMark2) {
	modMark2_ = modMark2;
}

int Student::getModMark2() const {
	return modMark2_;
}

void Student::setModMark3(int modMark3) {
	modMark3_ = modMark3;
}

int Student::getModMark3() const {
	return modMark3_;
}

void Student::toString() const {
	std::cout << "Student Name: " << Student::name_ << "\nStudent ID: " << Student::regID_ << "\nCourse: " << Student::course_ << "\nYear of Study: " << Student::year_
		<< "\nModule 1 Mark: " << Student::modMark1_ << "\nModule 2 Mark: " << Student::modMark2_ << "\nModule 3 Mark: " << Student::modMark3_;
}

std::string Student::caluclateClassification() const {
	double classification{ 0.0 };
	int sum{ 0 };

	sum = modMark1_ + modMark2_ + modMark3_;
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