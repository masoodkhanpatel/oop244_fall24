//// Ad-Hoc Polymorphism - Overloading
//// overloading.cpp
//
//
//#include <iostream>
//
//// Two function definitions:
//
//void display() {
//    std::cout << "No arguments";
//}
//
//void display(int a) {
//    std::cout << "One argument (" << a << ')';
//}
//
//void display(double a) {
//	std::cout << "One double argument (" << a << ')';
//}
//
//class Student {
//	float gpa;
//public:
//	Student(float gpa) : gpa(gpa) {}
//	void display() const {
//		std::cout << "Student GPA: " << gpa;
//	}
//	float getGPA() const {
//		return gpa;
//	}
//	void setGPA(float gpa) {
//		this->gpa = gpa;
//	}
//};
//
//Student operator+(const Student& a, const Student& b) {
//	return Student((a.getGPA() + b.getGPA()) / 2);
//}
//
//int main() {
//
//    display();
//    std::cout << std::endl;
//    display(10);
//    std::cout << std::endl;
//	display(12.6);
//	std::cout << std::endl;
//
//	Student a(3.5);
//	Student b(4.0);
//
//	Student c = a + b;
//	c.display();
//}