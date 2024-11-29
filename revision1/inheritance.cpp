// Inheritance example

#include <iostream>
#include "CarLibrary.h"


int main() {

	HybridCar hybridCar; // static memory
	// Car class constructor is called first, then ElectricCar constructor
	// then the HybridCar constructor

	//ElectricCar electricCar;

	//GasCar gasCar;

	//electricCar.drive();
	//gasCar.drive();

	//electricCar.Car::drive();
	//gasCar.Car::drive();

	//gasCar.setPrice(10000);
	//std::cout << gasCar.getPrice() << std::endl;

	//gasCar.callChangeGear();

	return 0;
}