//#include "Student.h"
//#include "Employee.h"
//#include <iostream>
//
//void callDisplay(Person* p) {
//	p->display();
//}
//
//int main() {
//	// create student with all arguments
//	float grades[] = { 90, 80, 70, 60, 50 };
//	Student* s1 = new Student("John", 20, 12345, 5, grades);
//
//	// s1->display();
//	callDisplay(s1);
//
//	//Person* p1 = new Person();
//	//p1->display();
//	//callDisplay(p1);
//
//	Employee* e = new Employee();
//	//e->display();
//	callDisplay(e);
//
//	// create a copy using the copy constructor
//	// Student* s2 = new Student(*s1);
//
//	// create 2 more students
//	Student* s2 = new Student("John", 20, 12345, 5, grades);
//	Student* s3 = new Student("Jane", 21, 12346, 5, grades);
//
//	Student* students[3];
//	students[0] = s1;
//	students[1] = s2;
//	students[2] = s3;
//
//	// Create 2 more employees
//	Employee* e1 = new Employee("John", 20, "123 Main St");
//	Employee* e2 = new Employee("Jane", 21, "124 Main St");
//
//	Employee* employees[2];
//	employees[0] = e1;
//	employees[1] = e2;
//
//	// big advantage of abstract class
//	Person* people[5];
//	people[0] = s1;
//	people[1] = s2;
//	people[2] = s3;
//	people[3] = e1;
//	people[4] = e2;
//
//	// Ask user if they want to create a student or employee
//	std::cout << "Please select an option\n1.Student\n2.Employee\n";
//	int option;
//	std::cin >> option;
//
//
//	Person* newUserObject;
//	if (option == 1) {
//		newUserObject = new Student();
//	}
//	else {
//		newUserObject = new Employee();
//	}
//	newUserObject->display();
//
//}
