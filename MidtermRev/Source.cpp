#include <iostream>




std::ostream& operator<<(std::ostream& os, const Student& src) {
	os << src.id << std::endl;
	return os;
}


int main() {
	int i = 2;
	Student a(1);
	Student* z = new Student(99);
	{
		Student b(2);
		int i = 5;
		std::cout << i << std::endl;
		Student c(3);
	}
	Student d(4);

	std::cout << a << d << *z;
	// *(z) -> *(&originz) -> originz
	delete z;
	std::cout << i << std::endl;
}