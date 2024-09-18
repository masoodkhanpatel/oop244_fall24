//#include <iostream>
//
////swap by reference
//void swap(int& a,int& b) { // &&a, &&b
//    int temp;
//    temp = a;
//    a = b;
//    b = temp;
//}
//
//// swap by address
//void swap(int* a, int* b) { // (&a, &b)
//    // *(&a) -> a, *(&b)->b
//    int temp;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//
//int main() {
//    int x = 5, y = 9;
//    std::cout << x << " " << y << "\n";
//    swap(x, y);
//    std::cout << x << " " << y << "\n";
//    swap(&x, &y);
//    std::cout << x << " " << y << "\n";
//}