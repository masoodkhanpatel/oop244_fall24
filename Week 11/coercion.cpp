//// Ad-Hoc Polymorphism - Coercion
//// coercion.cpp
//
//#include <iostream>
//
//// One function definition:
//
//void display(int a) {
//    std::cout << "One argument (" << a << ')';
//}
//
//void foo(int* a) {
//	std::cout << "Pointer to int\n";
//}
//
//int main() {
//
//	display(10); // exact match
//    std::cout << std::endl;
//	display(12.6); // narrowing, implicit conversion
//    std::cout << std::endl;
//	display('A'); // promotion, 1 byte to 4 bytes
//
//	display(static_cast<int>(12.6)); // narrowing, explicit conversion
//
//	const int* p = new int(5);
//	foo(const_cast<int*>(p));
//
//    std::cout << std::endl;
//}