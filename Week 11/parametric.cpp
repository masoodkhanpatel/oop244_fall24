//// Universal Polymorphism - Parametric
//// parametric.cpp
//
//#include <iostream>
//
//template<typename T>
//void sort(T* a, int n) { // T* a = new T[n]
//    int i, j;
//    T temp;
//
//    for (i = n - 1; i > 0; i--) {
//        for (j = 0; j < i; j++) {
//            if (a[j] > a[j + 1]) {
//                temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//        }
//    }
//}
//
//class Student {
//    int no;
//    // other data - omitted here
//public:
//    Student(int n = 0) : no(n) {}
//    bool operator>(const Student& rhs) const {
//        return no > rhs.no;
//    }
//    void display(std::ostream& os) const {
//        os << no << std::endl;
//    }
//};
//
//int main() {
//    int m[] = { 189, 843, 321 };
//    Student s[] = { Student(1256), Student(1267), Student(1234) };
//
//	sort(m, 3); // sort<int>(m, 3)
//    for (int i = 0; i < 3; i++)
//        std::cout << m[i] << std::endl;
//
//	// sort<Student>(s, 3)
//    sort(s, 3);
//    for (int i = 0; i < 3; i++)
//        s[i].display(std::cout);
//}