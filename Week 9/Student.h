//// Early Binding
//// Student.h
//
//#include <iostream>
//const int NC = 30;
//const int NG = 20;
//
//class Person {
//    char name[NC + 1];
//public:
//    Person();
//    Person(const char*);
//    virtual void display(std::ostream&) const;
//    friend class Student;
//};
//
//class Student : public Person {
//    int no;
//    float grade[NG];
//    int ng;
//public:
//    Student();
//    Student(int);
//    Student(const char*, int, const float*, int);
//    void display(std::ostream&) const;
//};