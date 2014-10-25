//********************************************************
//
// testEmployee.cpp
//
// Summary: This file includes the implementation for the
// Employee class (defined in Employee.h). It also 
// test the class 
//
// Author: Honorio Vega
// Created: October 21 2014
//
// Summary of Modifications:
// 					1. None to date
//					2. 10/23/2014 - Added Display function
//
//********************************************************

#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{	
            			
	Employee 
			// Uses first constructor
			employee1, 
			// Uses second constructor
			employee2("Mark Jones", 39119),
			 
			// Uses third constructor
	        employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");
			
	
	
	// Initialize remaining values for employee 1 object
	employee1.setName("Susan Meyers");
	employee1.setIdNumber(47899);
	employee1.setDepartment("Accounting");
	employee1.setPosition("Vice President");
	
	// Initialize remaining values for employee 2 object
	employee2.setDepartment("IT");
	employee2.setPosition("\tProgrammer");
	
	// Print column with labels
	cout << "\nName\t\tID Number\tDepartment\t Position\n";
	for (int i = 0; i < 16; i++)
	{
		cout << "====";
	}
	
	
	cout << "\n"; // used for space
	
	// Display Employee Information
	
	employee1.displayEmployeeInfo();
	employee2.displayEmployeeInfo();
	employee3.displayEmployeeInfo();
	
	cout << "\n"; // used for space
	
	return 0;
}

/*
		SAMPLE RUN.
	
	
Name		    ID Number	Department	     Position
================================================================
Susan Meyers	 47899		Accounting	     Vice President
Mark Jones	     39119		IT		         Programmer
Joy Rogers	     81774		Manufacturing	 Engineer 
*/
