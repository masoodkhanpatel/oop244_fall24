// Student.h

#include <iostream>
const int NC = 30;
const int NG = 20;

class Mammal {
public:
    Mammal();
    Mammal(int);
    ~Mammal();
    void display(std::ostream&) const;
};

class Person:public Mammal {                   // start of Base Class Definition
    char name[NC + 1];
public:
    Person();
    Person(const char* n);
    ~Person();
    void set(const char* n);
    void abc() {
        std::cout << "Person::abc()\n";
    };
    void display(std::ostream&) const;
};                              // end of Base Class Definition



class Student : public Person { // start of Derived Class Definition
    int no;
    float grade[NG];
    int ng;
    double* contactNumbers;
public:
    Student();
    Student(int);
    Student(int, const float*, int);
    Student(const char*, int, const float*, int);

    // copy constructor
    Student(const Student&);

    //copy assignment
    Student& operator=(const Student&);


    ~Student();
    void display(std::ostream&) ;
    void abc() {
        std::cout << "Student::abc()\n";
    };

};                              // end of Derived Class definition
