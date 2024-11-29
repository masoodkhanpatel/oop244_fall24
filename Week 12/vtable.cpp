// Virtual table example

#include <iostream>

class Base { // virtual table is created for this class
public:
	virtual void display() {
		std::cout << "Displaying from Base class" << std::endl;
	}
};

class Derived : public Base { // virtual table is created for this class
public:
	void display() {
		std::cout << "Displaying from Derived class" << std::endl;
	}
};

int main() {
	Base* b = new Derived(); // vptr points to the virtual table of Derived class
	b->display(); // vptr points to the display function of Derived class
	return 0;
}