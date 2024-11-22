#include <fstream>
#include <iostream>
#include <string>

int main() {
	std::fstream file;
	file.open("test.txt", std::ios::out | std::ios::in | std::ios::trunc);

	std::fstream file2("test2.txt");

	if (file.is_open()) {
		std::cout << "File opened successfully\n";
	}
	else {
		std::cout << "Error opening file\n";
	}

	file << "Hello World\n";
	file.seekg(0);
	file << "Jello World\n";
	file << "Hello World\n";

	char c;
	while (file.get(c)) {
		std::cout << c;
	}

}