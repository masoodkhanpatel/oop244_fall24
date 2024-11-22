//// Downcast within the Hierarchy
//// downcast.cpp
//
//#include <iostream>
//
//class Base {
//	char c;
//public:
//     virtual void display() const { std::cout << "Base\n"; }
//};
//
//class Derived : public Base {
//	int x;
//public:
//    void display() const { std::cout << "Derived\n"; }
//};
//
//// Base to Derived conversion fails
//
//void callDisplay(Base& b) {
//	b.display();
//}
//
//class Person {
//
//};
//
//class Student :public Person {
//
//};
//
//int main() {
//
//    Base b;
//	Derived d;
//
//	b.display();
//	d.display();
//
//	callDisplay(b); // Base
//	callDisplay(d); // Derived
//
//
//	Person* p = new Person;
//	Student* s1 = new Student;
//	Person* s2 = new Student;
//
//	Base* b1 = new Base; // Base object
//	Base* b2 = new Derived; // Derived object
//
//	// dynamic_cast<toType>(fromObject)
//    Derived* d1 = dynamic_cast<Derived*>(b1);
//	// Base to Derived
//
//    Derived* d2 = dynamic_cast<Derived*>(b2);
//	// Derived to Derived
//
//    if (d1 != nullptr)
//        d1->display(); // Base display
//    else
//        std::cerr << "d1 failed" << std::endl;
//
//    if (d2 != nullptr)
//		d2->display(); // Derived display
//    else
//        std::cerr << "d2 failed" << std::endl;
//
//    delete d1;
//    delete d2;
//}