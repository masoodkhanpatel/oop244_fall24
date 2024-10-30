// Student.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "Student.h"
using namespace std;

/*********************************************************/


Person::Person()
{
    std::cout << "Calling Person::Person()\n";
}

Person::Person(const char* n) : Mammal(456)
{
    std::cout << "Calling 1-arg Person()\n";
    set(n);
}

Person::~Person()
{
    std::cout << "Destruct Person\n";
}

void Person::set(const char* n) {
    strncpy(name, n, NC);
    name[NC] = '\0';
}

void Person::display(std::ostream& os) const
{
    os << name << ' ';
}




/*********************************************************/

Student::Student() {

    no = 0;
    ng = 0;
}

Student::Student(int n) {

    float g[] = { 0.0f };
    *this = Student(n, g, 0);
}

Student::Student(int sn, const float* g, int ng_) {
    std::cout << "Calling 3-arg constructor\n";
    bool valid = sn > 0 && g != nullptr && ng_ >= 0;
    if (valid)
        for (int i = 0; i < ng_ && valid; i++)
            valid = g[i] >= 0.0f && g[i] <= 100.0f;

    if (valid) {
        // accept the client's data
        no = sn;
        ng = ng_ < NG ? ng_ : NG;
        for (int i = 0; i < ng; i++)
            grade[i] = g[i];
    }
    else {
        *this = Student();
    }
}

Student::Student(const char* n, int sn, const float* g, int ng_) : Person(n)
{
    //set(n);
    std::cout << "Calling 4-arg constructor\n";
    contactNumbers = new double[3];
    bool valid = sn > 0 && g != nullptr && ng_ >= 0;
    if (valid)
        for (int i = 0; i < ng_ && valid; i++)
            valid = g[i] >= 0.0f && g[i] <= 100.0f;

    if (valid) {
        // accept the client's data
        no = sn;
        ng = ng_ < NG ? ng_ : NG;
        for (int i = 0; i < ng; i++)
            grade[i] = g[i];
    }
    else {
        *this = Student();
    }
}

Student::Student(const Student& src)
{
    no = src.no;
    ng = src.ng;

    if (src.contactNumbers != nullptr) {
        contactNumbers = new double[3]; // empty

        for (int i = 0; i < 3; i++) {
            contactNumbers[i] = src.contactNumbers[i];
        }
    }
    else {
        contactNumbers = nullptr;
    }
}

Student& Student::operator=(const Student& src)
{
    if (this != &src) {
        no = src.no;
        ng = src.ng;

        delete[] contactNumbers;
        contactNumbers = nullptr;

        contactNumbers = new double[3]; // empty

        for (int i = 0; i < 3; i++) {
            contactNumbers[i] = src.contactNumbers[i];
        }
    }
    return *this;
}

Student::~Student()
{
    std::cout << "Destruct Student\n";
    delete[] contactNumbers;
}

void Student::display(std::ostream& os)  {

    Person::display(os);
    if (no > 0) {
        os << no << ":\n";
        os.setf(ios::fixed);
        os.precision(2);
        for (int i = 0; i < ng; i++) {
            os.width(6);
            os << grade[i] << endl;
        }
        os.unsetf(ios::fixed);
        os.precision(6);
    }
    else {
        os << "no data available" << endl;
    }
}

Mammal::Mammal()
{
    std::cout << "Calling Mammal::Mammal()\n";
}

Mammal::Mammal(int a)
{
    std::cout << "Calling Mammal::Mammal(" << a << ")\n";
}

Mammal::~Mammal()
{
    std::cout << "Destruct Mammal\n";
}

void Mammal::display(std::ostream& os) const
{
    os << "Mammal::display()\n";
}
