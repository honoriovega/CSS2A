//********************************************************
//
// Employee.cpp
//
// Summary: This file includes the implementation for the
// Employee class (defined in Employee.h)
//
// Author: Honorio Vega
// Created: October 21 2014
//
// Summary of Modifications:
// 					1. None to date
//
//********************************************************

#include "Employee.h"
#include <string>
#include <cassert>
#include <iostream>
using namespace std;

// Constructors

Employee::Employee()
{
name = "";
department = "";
position = "";
idNumber = 0;
}

Employee::Employee(string name, int idNumber)
{
assert(name != "");
assert(idNumber > 0);
this->name = name;
this->idNumber = idNumber;
department = "";
position = "";

}

Employee::Employee(string name, int idNumber, string 
  department, string position)
{
assert(name != "");
this->name = name;

assert(idNumber > 0);
this->idNumber = idNumber;

assert(department != "");
this->department = department;

assert(position != "");
this->position = position;

}


// Mutator Functions

void Employee::setName(string name)
{
	assert(name != "");
	this->name = name;
}

void Employee::setIdNumber(int idNumber)
{
	assert(idNumber > 0);
	this->idNumber = idNumber;
}

void Employee::setDepartment(string department)
{
	assert(department != "");
	this->department = department;
}

void Employee::setPosition(string position) 
{
	assert(position != "");
	this->position = position;
}

// Display Function
void Employee::displayEmployeeInfo()
{
	cout << name << "\t" << idNumber << "\t\t" << department << "\t" 
		 << position << endl;
}
