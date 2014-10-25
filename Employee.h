//*********************************************************
//
// Clase Name: Employee
// 
// Description: This class provides the constructos
// and mutator functions as well as the functions
// to initialze and get the private variables
//
//********************************************************
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
	private:
		string name,
			   department,
			   position;
			   
		int idNumber;
	
	public:
	
	// CONSTRUCTORS
	Employee();
	Employee(string name, int idNumber);
	Employee(string name, int idNumber, 
			 string department, string position);
	
	
	// MUTATOR AND ACCESSOR FUNCTIONS
	//**********************************************
	string getName()const{return name;}
	// Summary: Returns name
	// Precondition: Name has been initialized
	// Postcondition: Returns name
	//
	//**********************************************
	
	//**********************************************
	void setName(string name);
	// Summary: Sets the string name to the parameter provided
	// Precondition: The parameter is not an empty string
	// Postcondition: Variable name is initialized to parameter
	//
	//**********************************************
	
	//**********************************************
	int getIdNumber()const{return idNumber;}
	// Summary: Returns the Id Number
	// Precondition: Id Number has been initialized
	// Postcondition: Returns Id Number
	//
	//**********************************************
	
	void setIdNumber(int idNumber);
	// Summary: Sets the Id Number to parameter provided
	// Precondition: Id number is an integer greater than zero
	// Postcondition: The id numbers is set to the parameter provided
	//
	//**********************************************
	
	string getDepartment()const{return department;}
	// Summary: Returns the string department
	// Precondition: The value has been initialized
	// Postcondition: The string department is returned
	//
	//**********************************************
	
	void setDepartment(string department);
	// Summary: Sets the department string
	// Precondition: The string is not an empty string
	// Postcondition: The value is set to parameter provided
	//
	//**********************************************
	
	string getPosition()const{return position;}
	// Summary: Returns the string position
	// Precondition: The value has been initialized
	// Postcondition: The string position is returned
	//
	//**********************************************
	
	void setPosition(string position);		 
	// Summary: Sets the string position
	// Precondition: The parameter provided is not an empty string
	// Postcondition: Sets the string position to paramter provided
	//
	//**********************************************

	// DISPLAY FUNCTION
	void displayEmployeeInfo();
	// Summary: Displays the employee infomration 
	// Precondition: Values have been intialized
	// Postcondition: Corresponding employee information is displayed
	//
	//**********************************************
};

#endif // EMPLOYEE_H
