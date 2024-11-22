//#include <iostream>
//
//int main() {
//	int i;
//	std::cin >> i;
//	if (std::cin.fail()) {
//		std::cout << "Invalid input\n";
//	}
//	else {
//		std::cout << "Valid input\n";
//	}
//
//	// std::cin.good() returns true if the stream is in a good state
//
//	int c[5];
//	for (int i = 0; i < 5; i++) {
//		std::cin >> c[i];
//		if (std::cin.good()) {
//			std::cout << "Valid input\n";
//		}
//		else {
//			std::cout << "Invalid input\n";		
//			std::cin.clear();
//			std::cin.ignore();
//		}
//	}
//	
//}