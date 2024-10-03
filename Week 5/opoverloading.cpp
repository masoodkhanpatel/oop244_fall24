// Overloading Operators
// operators.cpp

#include <iostream>
using namespace std;
const int NG = 20;

class Student {
    int no;
    float grade[NG];
    int ng;
    void set(int, const float*, int);
public:
    Student();
    Student(int);
    Student(int, const float*, int);
    void display() const;
    Student& operator+=(float g);
    Student& operator-=(float g);
    Student& operator++(); // prefix
    Student& operator++(int); // postfix
    operator int() const;

    int getStudentNo() const { return no; }
    int getNoGrades() const { return ng; }

    float getGrade(int i) const { 
        return i < ng ? grade[i] : 0.0f; 
    }
    
    friend bool areIdentical(const Student&, const Student&);
    // Student a, b;
    // a+= 9.9;
    // a.areIdentical(a,b);
    friend int giveNo(const Student& src);
    friend class Professor;

    void checkProfPay(Professor& src) {
        std::cout << src.salary;
    }
};

class Professor {
    int salary;
public:
    void makegradesZero( Student&);
    friend class Student;
};


// helper function

bool areIdentical(const Student&, const Student&);
bool operator==(const Student&, const Student&);

int giveNo(const Student& src) {
    return src.no;
}


Student::Student() {
    no = 0;
    ng = 0;
}

Student::Student(int sn, const float* g, int ng_) {
    set(sn, g, ng_);
}

void Student::set(int sn, const float* g, int ng_) {
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
        no = 0;
        ng = 0;
    }
}

void Student::display() const {
    if (no > 0) {
        cout << no << ":\n";
        cout.setf(ios::fixed);
        cout.precision(2);
        for (int i = 0; i < ng; i++) {
            cout.width(6);
            cout << grade[i] << endl;
        }
        cout.unsetf(ios::fixed);
        cout.precision(6);
    }
    else {
        cout << "no data available" << endl;
    }
}

Student& Student::operator+=(float g) {
    if (no != 0 && ng < NG && g >= 0.f && g <= 100.f)
        grade[ng++] = g;
    return *this;
}

Student& Student::operator-=(float g) {
    if (no != 00 && ng > 0 && g >= 0.f && g <= 100.f) {
        int i = 0;
        bool found = false;
        for (i = 0; i < ng; i++) {
            if (grade[i] == g) {
                found = true;
                break;
            }
        }
        if (found) {
            grade[i] = 0;
        }
    }
    return *this;
}

Student& Student::operator++() {
    for (int i = 0; i < ng; i++)
        if (grade[i] < 99.0f) 
            grade[i] += 1.f;
    return *this;
}

Student& Student::operator++(int) {
    // ++(*this);
    for (int i = 0; i < ng; i++)
        if (grade[i] < 99.0f)
            grade[i] += 1.f;
    return *this;
}

Student::operator int() const
{
    cout << "integer cast\n";
    return no;
}

Student::Student(int sn) {
    float g[] = { 0.0f };
    set(sn, g, 0);
}

bool areIdentical(const Student& lhs, const Student& rhs) {
    cout << "calling areIdentical()\n";
    bool same = lhs.no == rhs.no &&
        lhs.ng == rhs.ng;
    for (int i = 0; i < lhs.ng && same; i++)
        same = lhs.grade[i] == rhs.grade[i];
    return same;
}

bool operator==(const Student& lhs, const Student& rhs)
{
    return areIdentical(lhs,rhs);
}

void Professor::makegradesZero(Student& src)
{
    for(int i=0;i<src.ng;i++)
        src.grade[i] = 0;
}



int main() {
   //float gh[] = { 89.4f, 67.8f, 45.5f };
   // Student harry(1234, gh, 3);
   // harry.display();
   // harry += 78.23f;
   // harry.display();
   // harry -= 67.8f;
   // harry.display();

   // ++harry;
   // harry.display();
   // harry++;
   // harry.display();

   // int abc = int(harry);
   // std::cout << abc << "\n";

   // // if harry is valid object or not, no!=0
   // if (harry == 1234) {
   //     std::cout << "Match\n";
   // }
   // if (harry == true) {
   //     std::cout << "Match\n";
   // }

    //const int MAXSIZE = 35;
    //double nums[MAXSIZE];
    //nums[0] = 1.1;
    //nums[1] = 2.2;
    //int numValues = 2;

    //for (int i = 0; i < numValues; i++) {
    //    std::cout << nums[i] << std::endl;
    //}

    //nums[numValues] = 3.3;
    //numValues++;
    // nums[numValues++] = 3.3;


    //Student harry(975), nancy;

    //harry.display();
    //cout << endl;
    //nancy.display();
    //nancy = Student(428);
    //nancy = 428; // promotes an int to a Student
    //nancy.display();
    //cout << endl;

    float gh1[] = { 89.4f, 67.8f, 45.5f };
    float gh2[] = { 89.4f, 67.8f};
    Student harry(1234, gh1, 3), harry_(1234, gh2, 2);
    if (areIdentical(harry, harry_))
        cout << "are identical" << endl;
    else
        cout << "are different" << endl;

    if (harry == harry_) 
        cout << "are identical" << endl;
    else
        cout << "are different" << endl;

    Professor a;
    a.makegradesZero(harry);
    harry.display();
}

