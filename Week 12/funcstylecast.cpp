//// Function Style Casting
//// functionStyleCast.cpp
//
//#include <iostream>
//
//int main() {
//    double hours;
//    int minutes;
//    std::cout << "Enter minutes : ";
//    std::cin >> minutes;
//
//    hours = double(minutes) / 60;  // Function-Style Cast
//	hours = static_cast<double>(minutes) / 60;  // Static Cast
//	hours = (double)minutes / 60;  // C-Style Cast
//
//    // create an array using malloc
//	int* arr = (int*)malloc(5 * sizeof(int)); // 20 bytes
//
//    // using new
//	int* arr2 = new int[5]; // 20 bytes
//
//	// free the memory
//	free(arr);
//
//	// delete the memory
//	delete[] arr2;
//
//    std::cout << "In hours, this is " << hours;
//}