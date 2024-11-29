//#include <iostream>
//
//class Student {
//	int sid; //  4 bytes
//	char s; // 1 byte
//
//public:
//	Student() {
//		sid = 0;
//		s = 'A';
//	}
//
//	Student(int id, char grade) {
//		sid = id;
//		s = grade;
//	}
//
//	// initializer list format since C++11
//	Student(int id, char grade) : sid{ id }, s{ grade } {
//	}
//};
//
//int main()
//{
//
//	Student* s1 = nullptr;
//
//	std::cout << "Hello, World!" << std::endl;
//
//	std::print("Hello, World!\n"); // c++23 feature
//
//	// create an array of 5 random integers
//	int arr[5];
//
//	// assign values to the array
//	for (int i = 0; i < 5; i++) {
//		arr[i] = i;
//	}
//
//	// print the values of the array
//	std::cout << "Printing the values of the array" << std::endl;
//	for (int i = 0; i < 5; i++) {
//		std::cout << arr[i] << " ";
//	}
//
//	// loop using auto keyword
//	std::cout << "Printing the values of the array using auto keyword" << std::endl;
//	for (auto each:arr) {
//		std::cout << each << " " ;
//	}
//
//	auto name = "John";
//	std::cout << name << std::endl;
//	// print the type of the variable
//	std::cout << typeid(name).name() << std::endl;
//
//	// 1 byte = 8 bits
//	// 64 bits = 8 bytes
//	// 32 bits = 4 bytes
//
//	int x = 5;
//	std::cout << "Size of x: " << sizeof(x) << std::endl;
//	double y = 5.5;
//	std::cout << "Size of y: " << sizeof(y) << std::endl;
//
//	Student a;
//	std::cout << "Size of a: " << sizeof(a) << std::endl;
//
//	return 0;
//}