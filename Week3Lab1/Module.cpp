/*
* Module.cpp
*
* Version Information: V0.0.1
* Author: Conor McCay
* Date: 16/10/2018
* Description: Definition of class Constructors, Getters, Setters and Functions
*
* Copyright Notice
*/

#include "Module.h"
#include <string>

Module::Module() {

}

Module::Module(std::string title, std::string code, int creditPoints, int mark)
	:title_{ title }, code_{ code }, creditPoints_{ creditPoints }, mark_{ mark } {

}

void Module::setTitle(std::string title) {
	title_ = title;
}

std::string Module::getTitle() const {
	return title_;
}

void Module::setCode(std::string code) {
	code_ = code;
}

std::string Module::getCode() const {
	return code_;
}

void Module::setCreditPoints(int creditPoints) {
	creditPoints_ = creditPoints;
}

int Module::getCreditPoints() const {
	return creditPoints_;
}

void Module::setMark(int mark) {
	mark_ = mark;
}

int Module::getMark() const {
	return mark_;
}
