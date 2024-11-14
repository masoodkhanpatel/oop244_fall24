//#include <iostream>
//#include "Student.h"
//
////void swap(int& a, int& b) {
////	std::cout << "int swap" << std::endl;
////	int temp = a;
////	a = b;
////	b = temp;
////
////	// a -> temp
////	// b -> a
////	// temp -> b
////}
////
////void swap(double& a, double& b) {
////	std::cout << "double swap" << std::endl;
////	double temp = a;
////	a = b;
////	b = temp;
////
////	// a -> temp
////	// b -> a
////	// temp -> b
////}
////
////void swap(Student& a, Student& b) {
////	std::cout << "Student swap" << std::endl;
////	Student temp = a;
////	a = b;
////	b = temp;
////}
//
//template<typename T>
//void swap(T& a, T& b) {
//	std::cout << "template swap" << std::endl;
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//
//int main() {
//	int a, b;
//	a = 5;
//	b = 10;
//
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//
//	swap(a, b); // passing a copy
//
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//
//	double x = 5.5;
//	double y = 10.5;
//
//	std::cout << "x = " << x << std::endl;
//	std::cout << "y = " << y << std::endl;
//
//	swap(x, y); 
//
//
//	std::cout << "x = " << x << std::endl;
//	std::cout << "y = " << y << std::endl;
//
//	swap(a, x); // error
//
//}