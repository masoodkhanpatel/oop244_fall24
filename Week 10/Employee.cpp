#define _CRT_SECURE_NO_WARNINGS
#include "Employee.h"
#include <cstring>
#include <iostream>

Employee::Employee()
{
	address = new char[10];
}

Employee::Employee(const char* n, int a, const char* addr) : Person(n, a)
{
	address = new char[strlen(addr) + 1];
	strcpy(address, addr);
}

Employee::~Employee()
{
	delete[] address;
}

void Employee::deepCopy(const Employee& src)
{
	address = new char[strlen(src.address) + 1];
	strcpy(address, src.address);
}

// must call the base class copy constructor
Employee::Employee(const Employee& src) : Person(src)
{
	// *this = src; // call the assignment operator
	deepCopy(src);
}

Employee& Employee::operator=(const Employee& src)
{
	if (this != &src) // check for self-assignment
	{
		// call the Base class copy assignment operator
		// Person::operator=(src);
		(Person&)*this = src;

		delete[] address; // delete old memory
		deepCopy(src);
	}
	return *this;
}

void Employee::display() const
{
	std::cout << "Employee::display()" << std::endl;
}


