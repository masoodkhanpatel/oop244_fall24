#include "Person.h"

class Student : public Person {
	int studentID;
	float* grades;
	int numGrades;
	void deepCopy(const Student&);
public:
	Student();
	Student(const char*, int, int);
	Student(const char*, int, int, int, float*);
	~Student();

	// copy constructor
	Student(const Student&);

	// copy assignment
	Student& operator=(const Student&);

	void display() const;
};