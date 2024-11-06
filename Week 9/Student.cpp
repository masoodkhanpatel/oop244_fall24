//// Student.cpp
//#define _CRT_SECURE_NO_WARNINGS
//#include <cstring>
//#include "Student.h"
//using namespace std;
//
//Person::Person() {
//    name[0] = '\0';
//}
//
//Person::Person(const char* nm) {
//    strncpy(name, nm, NC);
//    name[NC] = '\0';
//}
//
//void Person::display(ostream& os) const {
//    std::cout << "Person::display()\n";
//    os << name << ' ';
//}
//
//Student::Student() {
//    no = 0;
//    ng = 0;
//}
//
//Student::Student(int n) {
//    float g[] = { 0.0f };
//    *this = Student("", n, g, 0);
//}
//
//Student::Student(const char* nm, int sn, const float* g, int ng_) : Person(nm) {
//    bool valid = sn > 0 && g != nullptr && ng_ >= 0;
//    if (valid)
//        for (int i = 0; i < ng_ && valid; i++)
//            valid = g[i] >= 0.0f && g[i] <= 100.0f;
//
//    if (valid) {
//        // accept the client's data
//        no = sn;
//        ng = ng_ < NG ? ng_ : NG;
//        for (int i = 0; i < ng; i++)
//            grade[i] = g[i];
//    }
//    else {
//        *this = Student();
//    }
//}
//
//void Student::display(ostream& os) const {
//    std::cout << "Student::display()\n";
//    if (no > 0) {
//        os << name << " "; // calling Person display from here as well
//        os << no << ":\n";
//        os.setf(ios::fixed);
//        os.precision(2);
//        for (int i = 0; i < ng; i++) {
//            os.width(6);
//            os << grade[i] << endl;
//        }
//        os.unsetf(ios::fixed);
//        os.precision(6);
//    }
//    else {
//        os << "no data available" << endl;
//    }
//}