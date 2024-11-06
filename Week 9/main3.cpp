//#include <iostream>
//
//
//class Animal {
//public:
//	virtual void makesSound() {
//		std::cout << "Animal makes sound.\n";
//	}
//};
//
//class Dog :public Animal {
//public:
//	void makesSound() {
//		std::cout << "whoof!!\n";
//	}
//};
//
//class Cat :public Animal {
//public:
//	void makesSound() {
//		std::cout << "meow!!\n";
//	}
//};
//
//
//// DYNAMIC DISPATCH
//void callSound(Animal* animal) {
//	animal->makesSound();   // makes connection during runtime
//}
//
//int main() {
//	std::cout << "What do you want as pet?\n1.Dog\n2.Cat\n";
//	int option;
//	std::cin >> option;
//	Animal* pet;
//	if (option == 1) {
//		pet = new Dog();
//	}
//	else {
//		pet = new Cat();
//	}
//	callSound(pet); // makes connection during runtime
//
//}