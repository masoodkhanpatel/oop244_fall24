#include <iostream>

void foo(int* a) {
	*a = 5;
}

void displayName(char* name) {
	std::cout << name << std::endl;
}

int main() {

	//double x = 5.5;

	//int a = (int)x; // C-style cast

	//// implicit cast
	//int b = x;

	//// static_cast, conversion happening at compile time
	//// static_cast<destination>(source)
	//int c = static_cast<int>(x);

	//// unrelated static_cast
	//const char* name = "John";
	//// int d = static_cast<int>(name);

	//std::cout << "a = " << a << std::endl;
	//std::cout << "b = " << b << std::endl;
	//std::cout << "c = " << c << std::endl;


	//// reinterpret_cast
	//int* p = (int*)&x; // C-style cast
	//int* q = reinterpret_cast<int*>(&x);
	//// convert one pointer type to another
	//// reinterpret_cast<destination>(source)

	//int d = static_cast<int>(x);

	//const int z = 3;
	//const int* ab = &z;

	//foo(const_cast<int*>(ab));

	//int* bc;

	//// foo expects int* and not const int*
	//bc = const_cast<int*>(ab);
	//// change the variable value
	//*bc = 5;

	//std::cout << "z = " << z << std::endl;
	//std::cout << "*bc = " << *bc << std::endl;

	const char* name2 = "John";
	displayName(const_cast<char*>(name2));
}