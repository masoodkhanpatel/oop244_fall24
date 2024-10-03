//#include <iostream>
//#include "Student.h"
//
//using namespace std;
//namespace seneca {
//
//    Student::Student() {
//        cout << "In constructor" << endl;
//        no = 0;
//        ng = 0;
//    }
//
//    Student::Student(int no, int ng)
//    {
//        this->no = no;
//        this->ng = ng;
//        Student::no = no;
//        std::cout << (this->no + this->ng) << std::endl;
//        std::cout << no + ng << std::endl;
//    }
//
//    Student& Student::set(int sn, const float* g, int ng_) {
//        bool valid = sn > 0 && g != nullptr && ng_ >= 0;
//        if (valid)
//            for (int i = 0; i < ng_ && valid; i++)
//                valid = g[i] >= 0.0f && g[i] <= 100.0f;
//
//        if (valid) {
//            // accept the client's data
//            no = sn;
//            ng = ng_ < NG ? ng_ : NG;
//            for (int i = 0; i < ng; i++)
//                grade[i] = g[i];
//        }
//        else {
//            no = 0;
//            ng = 0;
//        }
//        return *this;
//    }
//
//    Student& Student::display() {
//        this->doSomething();
//        seneca::doSomething();
//        //// left :: right
//        //if (no > 0) {
//        //    cout << no << ":\n";
//        //    cout.setf(ios::fixed);
//        //    cout.precision(2);
//        //    for (int i = 0; i < ng; i++) {
//        //        cout.width(6);
//        //        cout << grade[i] << endl;
//        //    }
//        //    cout.unsetf(ios::fixed);
//        //    cout.precision(6);
//        //}
//        //else {
//        //    cout << "no data available" << endl;
//        //}
//        return *this;
//        // Student a;
//        // a.display() -> a
//    }
//
//    void Student::doSomething()
//    {
//        std::cout << "Inside class\n";
//    }
//
//    void doSomething()
//    {
//        std::cout << "Outside class\n";
//    }
//}
