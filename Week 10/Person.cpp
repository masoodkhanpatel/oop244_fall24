#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"
#include <cstring>
#include <iostream>

Person::Person()
{
	name = new char[10];
	age = 0;
}

Person::Person(const char* n)
{
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	age = 0;
}

Person::Person(const char* n, int a)
{
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	age = a;
}

Person::~Person()
{
	delete[] name;
}

void Person::deepCopy(const Person& src)
{
	age = src.age;
	name = new char[strlen(src.name) + 1];
	strcpy(name, src.name);
}

Person::Person(const Person& src)
{
	std::cout << "Person copy constructor" << std::endl;
	// *this = src; // call the assignment operator

	deepCopy(src);
}

Person& Person::operator=(const Person& src)
{
	if (this != &src) // check for self-assignment
	{
		delete[] name; // delete old memory
		deepCopy(src);
	}
	return *this;
}

//void Person::display() const
//{
//	std::cout << "Person::display()" << std::endl;
//}




