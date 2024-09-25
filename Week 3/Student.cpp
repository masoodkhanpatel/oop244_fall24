#include "Student.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Student::display() const {

    if (no != 0) {
        cout << no << ":\n";
        cout.setf(ios::fixed);
        cout.precision(2);
        for (int i = 0; i < ng; i++) {
            cout << setw(6) << grade[i] << endl;
        }
        cout.unsetf(ios::fixed);
        cout.precision(6);
    }
    else {
        cout << "no data available";
    }
}

void Student::set(int sn, const float* g, int ng_)
{
    int n = ng_ < NG ? ng_ : NG;
    bool valid = true; // assume valid input, check for invalid values

    if (sn < 1)
        valid = false;
    else
        for (int i = 0; i < n && valid; i++)
            valid = g[i] >= 0.0f && g[i] <= 4.0f;

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

void doSomething() {
    cout << "Hello";
}
