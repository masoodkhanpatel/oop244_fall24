#include <iostream>

class Vehicle {
	int vin;
	double price;
	int maxSpeed;
public:
	virtual void startEngine() = 0;
};

class Ford:public Vehicle{
public:
	void startEngine() {
		std::cout << "Ford::startEngine();\n";
	}
};

class Toyota:public Vehicle {
public:
	void startEngine() {
		std::cout << "Toyota::startEngine();\n";
	}

};

void start(Vehicle& v) {
	v.startEngine();
}

int main() {
	Ford f;
	Toyota t;
	// Vehicle v;

	start(f);
	start(t);

	// if Derived class lacks it's own implementation of a function from...
	// the Base class
	// then if we call that function on Derived object,
	// the Base class function will execute


	// But if I want to force Derived class to have their own implementation
	// make virtual function as pure virtual function
	// then that class becomes Abstract class
	// and no objects can be created from that class
}