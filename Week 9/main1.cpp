//#include <iostream>
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
//void callSound(Animal* animal) {
//	animal->makesSound(); // assumes animal is of Animal class
//}
//
//int main() {
//	//Animal a;
//	//Dog b;
//	//Cat c;
//
//	Animal* a = new Animal();
//	Dog* b = new Dog();
//	Cat* c = new Cat();
//
//	callSound(a);
//	callSound(b); // pass Dog object
//	callSound(c); // pass Cat object
//
//	// use -> whenever the object is dynamically allocated connected via pointer
//	a->makesSound();
//
//
//	//a.makesSound();
//	//b.makesSound();
//	//c.makesSound();
//}