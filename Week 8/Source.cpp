//#include<iostream>
//
//class Person {
//	std::string name;
//	int age;
//public:
//	void setAge(int a) {
//		age = a;
//	}
//	int getAge() {
//		return age;
//	}
//};
//
//class Student:public Person {
//	int studentid;
//	double gpa;
//};
//
//class Employee :public Person {
//
//};
//
//class Vehicle {
//protected:
//	void checkOil() {};
//	void checkBrake() {};
//	void engineerMode() {};
//};
//
//class Toyota :public Vehicle {
//	int key;
//public:
//	void start() {
//		checkOil();
//		checkBrake();
//		if (key == 123) {
//			engineerMode();
//		}
//	}
//
//};
//
//int main() {
//	Person a;
//	a.setAge(22);
//	std::cout << a.getAge() << "\n";
//
//	Student b;
//	b.setAge(99);
//	std::cout << b.getAge() << "\n";
//
//	Employee c;
//	c.setAge(55);
//	std::cout << c.getAge() << "\n";
//
//	Toyota abc;
//	abc.start();
//
//}