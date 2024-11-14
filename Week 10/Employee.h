#include "Person.h"

class Employee : public Person {
	// address of the employee
	char* address;
	void deepCopy(const Employee&);
public:
	Employee();

	// name, age, address -> Person(name,age)
	Employee(const char*, int, const char*);
	~Employee();

	// copy constructor
	Employee(const Employee&);

	// copy assignment
	Employee& operator=(const Employee&);

	void display() const;
};