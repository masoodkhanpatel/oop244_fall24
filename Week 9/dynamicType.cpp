//// Polymorphic Objects - Dynamic Type
//// dyanmicType.cpp
//
//#include <iostream>
//#include "Student.h"
//
//void show(const Person& p) {
//    p.display(std::cout);
//    std::cout << std::endl;
//}
//
//int main() {
//    Person* p = nullptr;
//
//    p = new Person("Jane Doe");
//    show(*p);
//    delete p;
//
//    float g[] = { 89.4f, 67.8f, 45.5f };
//    p = new Student("Harry", 1234, g, 3);
//    show(*p);
//    delete p;
//}