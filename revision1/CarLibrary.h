#include <iostream>

class Car {
	int vin;
	int year;
	int price;

protected:
	Car() {
		std::cout << "Car constructor" << std::endl;
	};

	Car(int vin, int year, int price) {
		this->vin = vin;
		this->year = year;
		this->price = price;
	};

	~Car() {
		std::cout << "Car destructor" << std::endl;
	};

	void changeGear() {
		std::cout << "Changing gear" << std::endl;
	};
	void settingsMode() {
		std::cout << "Settings mode" << std::endl;
	};

public:
	void drive() {
		std::cout << "Driving a car" << std::endl;
	};

	void setPrice(int price) {
		this->price = price;
	};

	int getPrice() {
		return price;
	};
};

class ElectricCar : public Car {
public:
	ElectricCar() {
		std::cout << "ElectricCar constructor" << std::endl;
	};

	ElectricCar(int vin, int year, int price) : Car(vin, year, price) {
		// instead of calling the default constructor of the base class
		// we are calling the parameterized constructor of the base class
		std::cout << "ElectricCar constructor" << std::endl;
	};

	~ElectricCar() {
		std::cout << "ElectricCar destructor" << std::endl;
	};

	void drive() {
		std::cout << "Driving an electric car" << std::endl;
	};

	void callChangeGear() {
		changeGear();
	};
};

class GasCar : public Car {
public:
	GasCar() {
		std::cout << "GasCar constructor" << std::endl;
	};
	void drive() {
		std::cout << "Driving a gas car" << std::endl;
	};

	void callChangeGear() {
		changeGear();
	};
};

class HybridCar : public ElectricCar {
public:
	HybridCar() {
		std::cout << "HybridCar constructor" << std::endl;
	};

	~HybridCar() {
		std::cout << "HybridCar destructor" << std::endl;
	};
};
