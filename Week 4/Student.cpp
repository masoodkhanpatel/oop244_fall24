#include <iostream>
#include "Student.h"

using namespace std;

Student::Student()
{
    Student(0, { 0 }, 0);
    cout << "default constructor.\n";
}

Student::~Student()
{
    std::cout << "student object deleted, no: " << no << "\n";
}


Student::Student(int a, const float* b, int c)
{
    set(a, b, c);
    cout << "parameterized constructor.\n";
}

void Student::set(int sn, const float* g, int ng_) {
    int n = ng_ < NG ? ng_ : NG;
    bool valid = true; // assume valid input, check for invalid values

    if (sn < 1)
        valid = false;
    else
        for (int i = 0; i < n && valid; i++)
            valid = g[i] >= 0.0f && g[i] <= 100.0f;

    if (valid) {
        // accept the client's data
        no = sn;
        ng = n;
        for (int i = 0; i < n; i++)
            grade[i] = g[i];
    }
    else {
        no = 0; // ignore the client's data, set an empty state
    }
}

void Student::display() const {
    if (no != 0) {
        cout << no << ":\n";
        for (int i = 0; i < ng; i++)
            cout << grade[i] << endl;
    }
    else {
        cout << "no data available";
    }
}

Student Student::copy()
{
    return *this;
}

Student& Student::operator <<(const Student& src)
{
    return *this;
}

void Student::copyFrom(const Student& src) {
    no = src.no; // copy data from one object to another
    ng = src.ng; // copy data from one object to another
    for (int i = 0; i < NG; i++)
        grade[i] = src.grade[i]; // copy from one object to another
}
