//#include <iostream>
//
//class Animal {
//	int age;
//public:
//	void setAge(int a) { age = a; };
//	int getAge() { return age; }
//	void printAge() {
//		std::cout << age << "\n";
//	}
//};
//
//class Dog :public Animal {
//
//};
//
//class Cat :public Animal {
//
//};
//
//void displayAge(Animal& animal) {
//	animal.printAge();
//}
//
//
//
//int main() {
//	Animal a;
//	Dog b;
//	Cat c;
//
//	a.setAge(100);
//	//std::cout << a.getAge() << "\n"; 
//	// a.printAge();
//	displayAge(a);
//
//
//	b.setAge(99);
//	c.setAge(98);
//
//	////std::cout << b.getAge() << "\n";
//	////std::cout << c.getAge() << "\n";
//	//b.printAge();
//	//c.printAge();
//
//	// displayAge() expects Animal object as argument
//	// passing Dog object
//	displayAge(b);
//	// passing Cat object
//	displayAge(c);
//
//	// Whenever Base class is mentioned, I can pass child class objects as well
//
//}