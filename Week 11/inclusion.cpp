//// Universal Polymorphism - Inclusion
//// inclusion.cpp
//#include <iostream>
//
//class Person {
//public:
//	virtual void display() const {
//		std::cout << "Person\n";
//	}
//};
//
//class Student :public Person {
//public:
//	void display() const  {
//		std::cout << "Student\n";
//	}
//};
//
//class Teacher :public Person {
//public:
//	void display() const {
//		std::cout << "Teacher\n";
//	}
//};
//
//class TA :public Student {
//public:
//	void display() const {
//		std::cout << "TA\n";
//	}
//
//};
//
//void callDisplay(Person& p) { // Person include Student and Teacher
//	p.display();
//}
//
//int main() {
//	Person p;
//	Student s;
//	Teacher t;
//
//	//p.display();
//	//s.display();
//	//t.display();
//
//	callDisplay(p);
//	callDisplay(s);
//	callDisplay(t);
//	TA ta;
//	callDisplay(ta);
//}