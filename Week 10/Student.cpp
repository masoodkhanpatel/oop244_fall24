#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <iostream>

Student::Student()
{
	studentID = 0;
	grades = new float[5];
}

Student::Student(const char* n, int a, int id) : Person(n, a)
// calling the constructor of the base class
// Person(char*,int);
{
	studentID = id;
	grades = new float[5];
}

Student::Student(const char* n, int a, int id, int numGrades, float* g) : Person(n, a) {
	studentID = id;
	this->numGrades = numGrades;
	grades = new float[numGrades];
	for (int i = 0; i < numGrades; i++)
		grades[i] = g[i];
}

Student::~Student()
{
	delete[] grades;
}

void Student::deepCopy(const Student& src)
{
	studentID = src.studentID;
	numGrades = src.numGrades;

	grades = new float[numGrades];
	for (int i = 0; i < numGrades; i++)
		grades[i] = src.grades[i];
}

Student::Student(const Student& src) : Person(src) // call the base class copy constructor
{
	std::cout << "Student copy constructor" << std::endl;
	// *this = src; // call the assignment operator
	deepCopy(src);
}

Student& Student::operator=(const Student& src)
{
	if (this != &src) // check for self-assignment
	{
		// call the Base class copy assignment operator
		// Person::operator=(src);
		(Person&)*this = src;

		delete[] grades; // delete old memory
		deepCopy(src);
	}
	return *this;
}

void Student::display() const
{
	std::cout << "Student::display()" << std::endl;
}
