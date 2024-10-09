//// Resources - Constructor and Destructor
//// resources.cpp
//
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//const int NG = 25;
//
//class Student {
//    int no;
//  
//    int ng;
//public:
//    float* grade;  // float pointer
//    Student();
//    Student(int);
//    Student(int, const float*, int);
//    Student(const Student&); // copy constructor
//    Student& operator=(const Student&); // copy assignment
//    ~Student();
//    Student& display();
//    void read(std::istream&);
//};
//
//// helper function
//std::ostream& operator<<(std::ostream&,  Student&);
//std::istream& operator>>(std::istream&, Student&);
//
//
//Student::Student() {
//    no = 0;
//    ng = 0;
//    grade = nullptr;
//}
//
//Student::Student(int sn) {
//    float g[] = { 0.0f };
//    grade = nullptr;
//    *this = Student(sn, g, 0);
//}
//
//Student::Student(int sn, const float* g, int ng_) {
//    bool valid = sn > 0 && g != nullptr && ng_ >= 0;
//    if (valid)
//        for (int i = 0; i < ng_ && valid; i++)
//            valid = g[i] >= 0.0f && g[i] <= 100.0f;
//
//    if (valid) {
//        // accept the client's data
//        no = sn;
//        ng = ng_;
//        // allocate dynamic memory
//        if (ng > 0) {
//            grade = new float[ng]; // new array
//            for (int i = 0; i < ng; i++)
//                grade[i] = g[i]; // copying from source float array g
//        }
//        else {
//            grade = nullptr;
//        }
//    }
//    else {
//        grade = nullptr;
//        *this = Student();
//    }
//}
//
//Student::Student(const Student& src)
//{
//    // shallow copying these
//    this->ng = src.ng;
//    this->no = src.no;
//
//    // shallow copy
//    // this->grade = src.grade;
//    if (src.grade != nullptr) {
//        this->grade = new float[src.ng];
//        for (int i = 0; i < ng; i++) {
//            grade[i] = src.grade[i];
//        }
//    }
//    else {
//        grade = nullptr;
//    }
//
//}
//
//Student& Student::operator=(const Student& source)
//{
//    // 1. check for self-assignment (and NOTHING else)
//    if (this != &source)
//    {
//        // 2. clean up (deallocate previously allocated dynamic memory)
//        delete[] grade;
//
//        // 3. shallow copy (copy non-resource variables)
//        no = source.no;
//        ng = source.ng;
//
//        // 4. deep copy (copy the resource)
//        if (source.grade != nullptr) {
//            // 4.1 allocate new dynamic memory, if needed
//            grade = new float[ng];
//            // 4.2 copy the resource data
//            for (int i = 0; i < ng; i++)
//                grade[i] = source.grade[i];
//        }
//        else {
//            grade = nullptr;
//        }
//    }
//    return *this;
//}
//
//Student::~Student() {
//    delete[] grade;
//}
//
//Student& Student::display() {
//    if (no > 0) {
//        cout << no << ":\n";
//        cout.setf(ios::fixed);
//        cout.precision(2);
//        for (int i = 0; i < ng; i++) {
//            cout.width(6);
//            cout << grade[i] << endl;
//        }
//        cout.unsetf(ios::fixed);
//        cout.precision(6);
//    }
//    else {
//        cout << "no data available" << endl;
//    }
//    return *this;
//}
//
//void Student::read(istream& is) {
//    int no;          // will hold the student number
//    int ng;          // will hold the number of grades
//    float grade[NG]; // will hold the grades
//
//    cout << "Student Number : ";
//    is >> no;
//    cout << "Number of Grades : ";
//    is >> ng;
//    if (ng > NG) ng = NG;
//    for (int i = 0; i < ng; i++) {
//        cout << "Grade " << i + 1 << " : ";
//        is >> grade[i];
//    }
//
//    // construct a temporary Student
//    Student temp(no, grade, ng);
//    // if data is valid, the temporary object into the current object
//    if (temp.no != 0)
//        *this = temp;
//}
//
//int main() {
//    float gh[] = { 89.4f, 67.8f, 45.5f };
//    Student harry(1234, gh, 3);
//    harry.display();
//
//    // float arr[5]; // static memory
//    float* arr = new float[5]; // dynamic memory
//    delete[] arr;
//
//    Student john;
//    john = harry; // john = harry
//
//    std::cout << "harry: " << harry.grade << std::endl;
//    std::cout << "john: " << john.grade << std::endl;
//
//    Student daisy(harry); //calls copy constructor
//
//    // need for copy constructor
//    // Student abc(harry); 
//
//    // need for copy assignment
//    Student abc; // what about grade created here?
//    abc = harry; // in copy assignment, delete previous resource
//    abc = abc; // check for self assignment
//
//    std::cout << "daisy: " << daisy.grade << std::endl;
//
//    Student doe; // grade
//    // doe = doe;
//    doe = harry; // deep copy
//
//    // Rule of 3
//    // if any class, has dynamic resources(dynamically allocated variables)
//    // implement Rule of 3
//    // copy constructor - deep copy
//    // copy assignment - deep copy
//    // destructor (delete the dynamically allocated variables)
//
//    //harry.display().display();
//    // (harry.display()).display();
//    // harry.display();
//
//    //std::cout << harry << abc << daisy;
//    // std::cout << abc << daisy
//    // std::cout << daisy
//
//    std::cin >> harry >> daisy;
//    // std::cin >> daisy
//  
//}
//
//// os = std::cout
//std::ostream& operator<<(std::ostream& os, Student& src)
//{
//    std::cout << "Displaying student\n";
//    src.display();
//    return os;
//}
//
//std::istream& operator>>(std::istream& in, Student& src)
//{
//    std::cout << "Taking student values\n";
//    src.read(in);
//    src.display();
//    return in;
//}
