#include <iostream>
#include "Student.h"


int main() {
	float g[] = { 78.9f, 69.4f };
	//Student harry(999,g,2), sara, john; // calls constructor

	//Student* doe = new Student();
	//Student* jane = new Student(555,g,2);
	//
	//delete doe;
	//std::cout << "Main\n";
	//delete jane;
	//harry.set(975, g, 2);
	//
	//harry.display();
	//sara.display();

	//sara.copyFrom(harry);
	//sara.display();

	//john.display();


	//Student* a = new Student[3];
	//float g0[] = { 89.4f, 67.8f, 45.5f };
	//float g1[] = { 83.4f, 77.8f, 55.5f };
	//float g2[] = { 77.8f, 83.4f, 55.5f };
	//a[0].set(1234, g0, 3);
	//a[1].set(1235, g1, 3);
	//a[2].set(1236, g2, 3);
	//for (int i = 0; i < 3; i++)
	//	a[i].display();

	int abc = 3;
	int* pointerABC = &abc;

	std::cout << abc << "\n";
	std::cout << pointerABC << "\n";
	std::cout << *pointerABC << "\n"; // *(&abc) -> abc

	Student* s = new Student();
	std::cout << s << "\n";
	
	Student z(123,g,2), ss;

}