#include <fstream>
#include <iostream>

int main(){

	std::ifstream fin("input.txt");
	std::ofstream fout("output.txt");

	fout << "Hi\nHello";
	fout << "Line 1" << std::endl;   // record 1
	fout << "Line 2" << std::endl;   // record 2
	fout << "Line 3" << std::endl;   // record 3
	// fout = std::cout

	// fin = std::cin
	if (fin) {
		std::cout << "File exists\n";
		while (fin) {
			int i;
			fin >> i;
			if (fin)
				std::cout << i << '\n';
			//else
				// std::cout << "\n**Bad input**\n";
		}
	}
	else {
		std::cout << "File doesn't exist";
	}


}